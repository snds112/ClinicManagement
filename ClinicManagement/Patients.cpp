#include "Patients.h"


Patient::Patient(int i) {


	this->setID(L"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0");
	this->setFLname(L"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0");
	this->setDepartement(L"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0");
	this->setAge(L"\0\0\0");
	this->setSex(L"0");
	this->setAge(L"0");
	this->set_deleted(L"0");


}

Patient::~Patient() {}


void Patient::stringtowchar(String^ ID, String^ FLname, String^ Departement, String^ Age, String^ Sex, String^ Status)
{
	for (int i = 0; i < ID->Length; i++)
	{
		this->ID[i] = ID[i];
	}
	for (int i = 0; i < FLname->Length; i++)
	{
		this->FLname[i] = FLname[i];
	}
	for (int i = 0; i < Departement->Length; i++)
	{
		this->Departement[i] = Departement[i];
	}
	for (int i = 0; i < Age->Length; i++)
	{
		this->Age[i] = Age[i];
	}

	this->Sex[0] = Sex[0];


	this->Status[0] = Status[0];

}
//String^ Patient::wchartostring(wchar_t* in)


void Patient::setID(wchar_t* set_to) {
	wcscpy(this->ID, set_to);
}
void Patient::setFLname(wchar_t* set_to) {
	wcscpy(this->FLname, set_to);
}
void Patient::setDepartement(wchar_t* set_to) {
	wcscpy(this->Departement, set_to);
}
void Patient::setAge(wchar_t* set_to) {
	wcscpy(this->Age, set_to);
}
void Patient::setSex(wchar_t* new_sex) { this->Sex[0] = *new_sex; }
void Patient::setStatus(wchar_t* new_status) { this->Status[0] = *new_status; }
void Patient::set_deleted(wchar_t* deleted) { this->deleted = *deleted; }


