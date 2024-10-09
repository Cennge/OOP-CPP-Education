#pragma once
#include "Human.h"
class Director : public Human
{
	char* Firm;
	double Salary;
public:
	Director();
	Director(const char* n, int a, const char* companyN, double sal, const char* prog, const char* skillset);
	~Director();
	void Output();
	void Input(const char* n, int a, const char* companyN, double sal, const char* prog, const char* skillset);
};