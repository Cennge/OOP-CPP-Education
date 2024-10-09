#include "Lawyer.h"
#include<iostream>
using namespace std;

Lawyer::Lawyer()
{
	name = nullptr;
	age = 0;
	company = nullptr;
	finishedUniversity = false;
}

Lawyer::Lawyer(const char* n, int a, const char* comp, bool finish) : Human(n, a)
{
	company = new char[strlen(comp) + 1];
	strcpy_s(company, strlen(comp) + 1, comp);
	finishedUniversity = finish;
}

Lawyer::~Lawyer()
{
	delete[] company;
}

void Lawyer::Output()
{
	Human::Output();
	cout << "Company: " << company << endl;
	cout << "Finished University: " << finishedUniversity << endl << endl;
}

void Lawyer::Input(const char* n, int a, const char* comp, bool finish)
{
	if (name != nullptr) delete[] name;
	if (company != nullptr) delete[] company;

	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	age = a;

	company = new char[strlen(comp) + 1];
	strcpy_s(company, strlen(comp) + 1, comp);
	finishedUniversity = finish;
}