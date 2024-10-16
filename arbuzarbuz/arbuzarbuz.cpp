#include "Human.h"
#include "Student.h"
#include <iostream>
using namespace std;

int main()
{
    Human* person;

    person = new Student("Alex", 20, 2000.0, "Harvard");

    person->Output();

    person->Salary();

    person->Input("John", 21, 2500.0, "MIT");

    person->Output();

    delete person;

    return 0;
}
