#include "Educator.h"
#include "Human.h"
#include <iostream>

using namespace std;

Educator::Educator()
{
    cout << "Construct Educator\n";
    name = nullptr;
    age = 0;
    Univer = nullptr;
    Salary = 0.0;
    Subject = nullptr;
}

Educator::Educator(const char* n, int a, char* _univer, double _salary, char* _subject) : Human(n, a)
{
    cout << "Construct Educator\n";

    Salary = _salary;

    Univer = new char[strlen(_univer) + 1];
    strcpy_s(Univer, strlen(_univer) + 1, _univer);

    Subject = new char[strlen(_subject) + 1];
    strcpy_s(Subject, strlen(_subject) + 1, _subject);
}

Educator::~Educator()
{
    delete[] Univer;
    delete[] Subject;
    cout << "Destruct Educator\n";
}

void Educator::Output()
{
    cout << "Output Educator\n";
    Human::Output(); 
    cout << "University: " << Univer << endl;
    cout << "Salary: " << Salary << endl;
    cout << "Subject: " << Subject << endl << endl;
}

void Educator::Input(const char* n, int a, char* _univer, double _salary, char* _subject)
{
    if (name != nullptr) delete[] name;
    if (Univer != nullptr) delete[] Univer;
    if (Subject != nullptr) delete[] Subject;

    name = new char[strlen(n) + 1];
    strcpy_s(name, strlen(n) + 1, n);
    age = a;

    Univer = new char[strlen(_univer) + 1];
    strcpy_s(Univer, strlen(_univer) + 1, _univer);

    Salary = _salary;

    Subject = new char[strlen(_subject) + 1];
    strcpy_s(Subject, strlen(_subject) + 1, _subject);
}