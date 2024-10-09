#pragma once
#include "Human.h"
class Programmer : public Human
{
protected:
	char* companyName;
	int salary;
public:
	Programmer();
	Programmer(const char* n, int a, const char* companyN, int sal);
	~Programmer();
	void Output();
	void Input(const char* n, int a, const char* companyN, int sal);
};