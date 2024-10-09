#pragma once
#include "Human.h"

class Student : public Human  //  потомок
{
	char* Univer;
	double Scholarship;
public:
	Student();
	Student(const char* n, int a, const char* U, double S);
	~Student();
	void Output(); // переопределение метода Output в потомке!!
	void Input(const char* n, int a, const char* U, double S); //замещение метода Input();
};
