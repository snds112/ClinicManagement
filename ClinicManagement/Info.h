#pragma once
#include <string.h>
class INFO
{
public:

	wchar_t ID[30];
	int save_num;



	INFO(wchar_t* ID, int save_num);
	~INFO();
	INFO();


	void setID(wchar_t* set_to);


	void setSave_num(int new_Save_num);
};

