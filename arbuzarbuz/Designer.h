#pragma once
#include "Human.h"
class Designer : public Human
{
protected:
	char* companyName;
	int salary;
	char* programm;
	char* skills;
public:
	Designer();
	Designer(const char* n, int a, const char* companyN, int sal, const char* prog, const char* skillset);
	~Designer();
	void Output();
	void Input(const char* n, int a, const char* companyN, int sal, const char* prog, const char* skillset);
};