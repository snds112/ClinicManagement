#pragma once
#include<cwchar>
using namespace System;
class Patient
{
public:

	wchar_t ID[30] = L"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
	wchar_t FLname[30] = L"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
	wchar_t Departement[50] = L"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
	wchar_t Sex[2] = L"\0";
	wchar_t Age[4] = L"\0\0\0";
	wchar_t Status[2] = L"\0";
	wchar_t deleted = L'0';


	Patient(int i);
	//Patient(const wchar_t *ID[30], const wchar_t *FLname[30], const wchar_t* Departement[50], const wchar_t* Age[4], const wchar_t* Sex, const wchar_t* Status);
	~Patient();

	/*void getID(const wchar_t* out[30]);
	void getFLname(const wchar_t* out[30]);
	void getDepartement(const wchar_t* out[50]);
	void getAge(const wchar_t* out[4]);
	const wchar_t* getSex();
	const wchar_t* getStatus();
	bool is_deleted();*/

	//String^ wchartostring(wchar_t* in);
	void stringtowchar(String^ ID, String^ FLname, String^ Departement, String^ Age, String^ Sex, String^ Status);
	void setID(wchar_t* set_to);
	void setFLname(wchar_t* set_to);
	void setDepartement(wchar_t* set_to);
	void setAge(wchar_t* new_age);
	void setSex(wchar_t* new_sex);
	void setStatus(wchar_t* new_status);
	void set_deleted(wchar_t* deleted);
};
