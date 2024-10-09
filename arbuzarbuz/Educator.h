#pragma once
#include "Human.h"
class Educator : public Human
{
	char* Univer;
	double Salary;
	char* Subject;
public:
	Educator();
	Educator(const char* n, int a, char* _univer, double _salary, char* _subject);
	~Educator();
	void Output();
	void Input(const char* n, int a, char* _univer, double _salary, char* _subject);
};

