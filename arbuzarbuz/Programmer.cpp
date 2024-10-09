#include "Programmer.h"
#include "Human.h"
#include <iostream>
using namespace std;

Programmer::Programmer()
{
	cout << "Construct programmer\n";
	name = nullptr;
	age = 25;
	companyName = nullptr;
	salary = 0;
}
Programmer::Programmer(const char* n, int a, const char* companyN, int sal)
{
	cout << "Construct programmer\n";
	salary = sal;
	companyName = new char[strlen(companyN) + 1];
	strcpy_s(companyName, strlen(companyN) + 1, companyN);
}
Programmer:: ~Programmer()
{
	if (companyName != nullptr)
	{
		delete[] companyName;
	}
	cout << "Destruct programmer\n";
}
void Programmer::Output()
{
	cout << "Output programmer\n";
	Human::Output();

	cout << "Company name : " << companyName << endl;
	cout << "Salary: " << salary << endl;
}
void Programmer::Input(const char* n, int a, const char* companyN, int sal)
{
	if (name != nullptr) delete[] name;
	if (companyName != nullptr) delete[] companyName;

	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	age = a;

	companyName = new char[strlen(companyName) + 1];
	strcpy_s(companyName, strlen(companyN) + 1, companyN);

	salary = sal;
}