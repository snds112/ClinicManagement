#pragma once

#include <stdio.h>
#include <io.h>
#include "Patients.h"
#include "Info.h"

class FileHandling
{
public:
	FILE* patientfile;
	FILE* infofile;

	FileHandling();
	~FileHandling();



	bool create(char patientfile[], char  infofile[], Patient p);
	int add(char patientfile[], char  infofile[], Patient p);
	wchar_t getPatientNum(char  infofile[], wchar_t* ID);
	Patient getPatientFromFile(char patientfile[], int save_num);


	bool modifyPatient(char patientfile[], String^ OldID, Patient newPatient);
	bool checkifnotdeleted(char  patientfile[], String^ ID);
	bool removepatient(char  patientfile[], String^ ID);




	String^ searchResultMatch(Patient filter, Patient p);



};

