#include "Designer.h"
#include "Human.h"
#include <iostream>

using namespace std;

Designer::Designer()
{
    cout << "Construct Designer\n";
    name = nullptr;
    age = 0;
    companyName = nullptr;
    salary = 0;
    programm = nullptr;
    skills = nullptr;
}

Designer::Designer(const char* n, int a, const char* companyN, int sal, const char* prog, const char* skillset) : Human(n, a)
{
    cout << "Construct Designer\n";

    salary = sal;

    companyName = new char[strlen(companyN) + 1];
    strcpy_s(companyName, strlen(companyN) + 1, companyN);

    programm = new char[strlen(prog) + 1];
    strcpy_s(programm, strlen(prog) + 1, prog);

    skills = new char[strlen(skillset) + 1];
    strcpy_s(skills, strlen(skillset) + 1, skillset);
}

Designer::~Designer()
{
    delete[] companyName;
    delete[] programm;
    delete[] skills;
    cout << "Destruct Designer\n";
}

void Designer::Output()
{
    cout << "Output Designer\n";
    Human::Output();
    cout << "Company Name: " << companyName << endl;
    cout << "Salary: " << salary << endl;
    cout << "Program Used: " << programm << endl;
    cout << "Skills: " << skills << endl << endl;
}

void Designer::Input(const char* n, int a, const char* companyN, int sal, const char* prog, const char* skillset)
{
    if (name != nullptr) delete[] name;
    if (companyName != nullptr) delete[] companyName;
    if (programm != nullptr) delete[] programm;
    if (skills != nullptr) delete[] skills;

    name = new char[strlen(n) + 1];
    strcpy_s(name, strlen(n) + 1, n);
    age = a;

    companyName = new char[strlen(companyN) + 1];
    strcpy_s(companyName, strlen(companyN) + 1, companyN);

    salary = sal;

    programm = new char[strlen(prog) + 1];
    strcpy_s(programm, strlen(prog) + 1, prog);

    skills = new char[strlen(skillset) + 1];
    strcpy_s(skills, strlen(skillset) + 1, skillset);
}
