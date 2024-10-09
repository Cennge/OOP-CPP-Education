#include "Student.h"
#include<iostream>
using namespace std;

Student::Student()
{
	cout << "Construct Student\n";
	name = nullptr;
	age = 12;
	Univer = nullptr;
	Scholarship = 0;

}
Student::Student(const char* n, int a, const char* U, double S) :Human(n, a)
{
	cout << "Construct Student\n";
	Scholarship = S;
	Univer = new char[strlen(U) + 1];
	strcpy_s(Univer, strlen(U) + 1, U);
}
Student::~Student()
{
	delete[] Univer;
	cout << "Destruct Student\n";
}
void Student::Output()
{
	cout << "Output Student\n";
	Human::Output();
	cout << "University: " << Univer << endl
		<< "Scholarship: " << Scholarship << endl << endl;
}
void Student::Input(const char* n, int a, const char* U, double S)
{
	if (name != nullptr)
	{
		delete[] name;
	}
	if (Univer != nullptr)
	{
		delete[] Univer;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	age = a;

	Scholarship = S;
	Univer = new char[strlen(U) + 1];
	strcpy_s(Univer, strlen(U) + 1, U);
}