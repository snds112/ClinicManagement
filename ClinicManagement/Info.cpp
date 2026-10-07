#include "Info.h"


INFO::INFO() {}
INFO::INFO(wchar_t* ID, int save_num)
{
	wcsncpy(this->ID, ID, 30);
	this->save_num = save_num;
}
INFO::~INFO() {}


void INFO::setID(wchar_t* set_to)
{
	wcsncpy(this->ID, set_to, 30);
}


void INFO::setSave_num(int new_Save_num)
{
	this->save_num = new_Save_num;
}