#include "Director.h"
#include "Human.h"
#include <iostream>

using namespace std;

Director::Director()
{
    cout << "Construct Director\n";
    name = nullptr;
    age = 30;  // Установим возраст по умолчанию
    Firm = nullptr;
    Salary = 0.0;
}

Director::Director(const char* n, int a, const char* companyN, double sal, const char* prog, const char* skillset) : Human(n, a)
{
    cout << "Construct Director\n";
    Salary = sal;

    Firm = new char[strlen(companyN) + 1];
    strcpy_s(Firm, strlen(companyN) + 1, companyN);
}

Director::~Director()
{
    delete[] Firm;
    cout << "Destruct Director\n";
}

void Director::Output()
{
    cout << "Output Director\n";
    Human::Output(); 
    cout << "Firm: " << Firm << endl;
    cout << "Salary: " << Salary << endl << endl;
}

void Director::Input(const char* n, int a, const char* companyN, double sal, const char* prog, const char* skillset)
{
    if (name != nullptr) delete[] name;
    if (Firm != nullptr) delete[] Firm;

    name = new char[strlen(n) + 1];
    strcpy_s(name, strlen(n) + 1, n);
    age = a;

    Firm = new char[strlen(companyN) + 1];
    strcpy_s(Firm, strlen(companyN) + 1, companyN);

    Salary = sal;
}
