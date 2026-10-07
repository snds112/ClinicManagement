#include "FileHandling.h"

FileHandling::FileHandling() {};
FileHandling::~FileHandling() {};

bool FileHandling::create(char patientfile[], char  infofile[], Patient p)
{
	this->patientfile = fopen(patientfile, "wb");
	this->infofile = fopen(infofile, "wb");

	if (this->patientfile == nullptr || this->infofile == nullptr)
	{
		fclose(this->infofile);
		fclose(this->patientfile);
		return 0;
	}
	else
	{
		INFO infoTemp(p.ID, 1);

		fseek(this->patientfile, 0, SEEK_SET);
		fseek(this->infofile, 0, SEEK_SET);
		fwrite(&p, sizeof(Patient), 1, this->patientfile);
		fwrite(&infoTemp, sizeof(INFO), 1, this->infofile);
		fclose(this->infofile);
		fclose(this->patientfile);
		return 1;
	}
	fclose(this->infofile);
	fclose(this->patientfile);
	return 0;
}

int FileHandling::add(char patientfile[], char  infofile[], Patient p)
{
	this->patientfile = fopen(patientfile, "rb+");
	this->infofile = fopen(infofile, "rb+");
	Patient patientTemp(1);
	INFO infoTemp;


	if (patientfile == nullptr || infofile == nullptr)
	{
		fclose(this->infofile);
		fclose(this->patientfile);
		return 0;
	}
	else
	{
		while ((fread(&patientTemp, sizeof(Patient), 1, this->patientfile) == 1))
		{
			if ((patientTemp.deleted == '0') && wcscmp(patientTemp.ID, p.ID) == 0)
			{
				return 2;
			}
		}

		fseek(this->patientfile, 0, SEEK_SET);
		fseek(this->infofile, 0, SEEK_SET);


		while ((fread(&patientTemp, sizeof(Patient), 1, this->patientfile) == 1) && ((fread(&infoTemp, sizeof(INFO), 1, this->infofile) == 1)))
		{
			if (patientTemp.deleted == '1')
			{
				fseek(this->patientfile, -1 * sizeof(Patient), SEEK_CUR);
				fseek(this->infofile, -1 * sizeof(INFO), SEEK_CUR);
				fwrite(&p, sizeof(Patient), 1, this->patientfile);

				infoTemp.setID(p.ID);
				fwrite(&infoTemp, sizeof(INFO), 1, this->infofile);

				fclose(this->infofile);
				fclose(this->patientfile);
				return 1;
			}
		}

		fseek(this->patientfile, 0, SEEK_END);
		fseek(this->infofile, -1, SEEK_END);
		fwrite(&p, sizeof(Patient), 1, this->patientfile);
		fread(&infoTemp, sizeof(INFO), 1, this->infofile);
		infoTemp.setID(p.ID);
		infoTemp.setSave_num(infoTemp.save_num + 1);
		fwrite(&infoTemp, sizeof(INFO), 1, this->infofile);
		fclose(this->infofile);
		fclose(this->patientfile);
		return 1;
	}
}

wchar_t FileHandling::getPatientNum(char  infofile[], wchar_t* ID)
{
	this->infofile = fopen(infofile, "rb");
	INFO infoTemp;

	if (this->infofile == nullptr)
	{
		fclose(this->infofile);

		return '\0';
	}
	else
	{
		while ((fread(&infoTemp, sizeof(INFO), 1, this->infofile) == 1))
		{
			if (wcscmp(infoTemp.ID, ID) == 0)
			{
				fclose(this->infofile);

				return infoTemp.save_num;
			}
		}
		fclose(this->infofile);

		return '\0';
	}
}

Patient FileHandling::getPatientFromFile(char patientfile[], int save_num)
{
	this->patientfile = fopen(patientfile, "rb");
	Patient patientTemp(1);
	patientTemp.set_deleted(L"1");
	if (patientfile == nullptr)
	{
		fclose(this->patientfile);
		return patientTemp;
	}
	else
	{
		fseek(this->patientfile, save_num * sizeof(Patient), SEEK_SET);
		fread(&patientTemp, sizeof(Patient), 1, this->patientfile);

		fclose(this->patientfile);
		return  patientTemp;
	}
}

bool FileHandling::modifyPatient(char patientfile[], String^ OldID, Patient newPatient)
{
	this->patientfile = fopen(patientfile, "rb+");
	Patient ptemp(0);
	if (patientfile == nullptr)
	{
		fclose(this->patientfile);

		return 0;
	}
	else
	{
		bool eq = true;

		while ((fread(&ptemp, sizeof(Patient), 1, this->patientfile) == 1))
		{
			eq = true;
			if ((ptemp.deleted == '0') && eq)
			{
				eq = true;
				for (int i = 0; i < OldID->Length && i < 30 && eq; i++)
				{
					if (ptemp.ID[i] != OldID[i])
					{
						eq = false;
					}
				}
				if (eq) {
					fseek(this->patientfile, -1 * sizeof(Patient), SEEK_CUR);

					wcsncpy(newPatient.ID, ptemp.ID, 30);
					if (newPatient.FLname == L"0")
						wcsncpy(newPatient.FLname, ptemp.FLname, 30);
					if (wcscmp(newPatient.Departement, L"0") == 0)
						wcsncpy(newPatient.Departement, ptemp.Departement, 50);
					if (wcscmp(newPatient.Age, L"0") == 0)
						wcsncpy(newPatient.Age, ptemp.Age, 3);
					if (wcscmp(newPatient.Sex, L"0") == 0)
						wcsncpy(newPatient.Sex, ptemp.Sex, 1);
					if (wcscmp(newPatient.Status, L"0") == 0)
						wcsncpy(newPatient.Status, ptemp.Status, 1);

					fwrite(&newPatient, sizeof(Patient), 1, this->patientfile);
					fclose(this->patientfile);
					return 1;
				}
			}
		}
		fclose(this->patientfile);

		return 0;
	}
}

bool FileHandling::checkifnotdeleted(char  patientfile[], String^ ID)
{
	this->patientfile = fopen(patientfile, "rb");
	Patient ptemp(0);
	bool eq = true;
	if (patientfile == nullptr)
	{
		fclose(this->patientfile);

		return 0;
	}
	else
	{
		while ((fread(&ptemp, sizeof(Patient), 1, this->patientfile) == 1))
		{
			eq = false;
			if ((ptemp.deleted == '0'))
			{
				for (int i = 0; i < ID->Length && i < 30; i++)
				{
					if (ptemp.ID[i] == ID[i])
					{
						eq = true;
					}
					else
						eq = false;
				}
				if (eq)
				{
					fclose(this->patientfile);
					return 1;
				}
			}
		}

		if (!eq) {
			fclose(this->patientfile);

			return 0;
		}
	}
}
bool FileHandling::removepatient(char  patientfile[], String^ ID)
{
	this->patientfile = fopen(patientfile, "rb+");
	Patient ptemp(0);
	bool eq = true;
	if (patientfile == nullptr)
	{
		fclose(this->patientfile);

		return 0;
	}
	else
	{
		while ((fread(&ptemp, sizeof(Patient), 1, this->patientfile) == 1))
		{
			eq = false;
			if ((ptemp.deleted == '0'))
			{
				for (int i = 0; i < ID->Length && i < 30; i++)
				{
					if (ptemp.ID[i] == ID[i])
					{
						eq = true;
					}
					else
						eq = false;
				}
				if (eq)
				{
					fseek(this->patientfile, -1 * sizeof(Patient), SEEK_CUR);
					ptemp.deleted = '1';
					fwrite(&ptemp, sizeof(Patient), 1, this->patientfile);
					fclose(this->patientfile);
					return 1;
				}
			}
		}

		if (!eq) {
			fclose(this->patientfile);

			return 0;
		}
	}



}

String^ FileHandling::searchResultMatch(Patient filter, Patient p)
{

	if (p.deleted == '1')
		return "\0";
	else
	{
		if (((wcscmp(filter.ID, p.ID) == 0) || (wcscmp(filter.ID, L"0") == 0)) && ((wcscmp(filter.Departement, p.Departement) == 0) || (wcscmp(filter.Departement, L"0") == 0)) && ((wcscmp(filter.FLname, p.FLname) == 0) || (wcscmp(filter.FLname, L"0") == 0)) && ((wcscmp(filter.Sex, p.Sex) == 0) || (wcscmp(filter.Sex, L"0") == 0)) && ((wcscmp(filter.Age, p.Age) == 0) || (wcscmp(filter.Age, L"0") == 0)) && ((wcscmp(filter.Status, p.Status) == 0) || (wcscmp(filter.Status, L"0") == 0)))
		{
			String^ out = "";
			String^ temp = gcnew String(p.ID);
			out = out + "ID : " + temp + "\r\n";
			temp = gcnew String(p.Departement);
			out = out + "Departement : " + temp + "\r\n";
			temp = gcnew String(p.FLname);
			out = out + "First and Last name : " + temp + "\r\n";
			temp = gcnew String(p.Sex);
			out = out + "Sex : " + temp + "\r\n";
			temp = gcnew String(p.Age);
			out = out + "Age : " + temp + "\r\n";
			temp = gcnew String(p.Status);
			out = out + "Status : " + temp + "\r\n";
			delete temp;
			return out;
		}
		else
			return "\0";
	}


}

