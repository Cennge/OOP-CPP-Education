#include<iostream>
#include<Windows.h>
using namespace std;

class Student
{
    char* name;
    int age;
public:
    Student() // construct by default
    {
        name = nullptr;
        age = 0;
    }
    Student(const char* Name) {
        name = new char[strlen(Name) + 1];
        strcpy_s(name, strlen(Name) + 1, Name);
    }
    Student(const char* Name, int Age):Student(Name){
        age = Age;
    }
    ~Student()
    {
        if (name != nullptr)
        {
            delete[] name;
        }
        cout << "Destruct\n";
        Sleep(1000);

    }
  
    void Init()
    {
        char buff[20];
        cout << "Enter name -> ";
        cin >> buff; // Oleg

        name = new char[strlen(buff) + 1];
        strcpy_s(name, strlen(buff) + 1, buff);
        cout << "Enter age-> ";
        cin >> age;
    }
    void Output()
    {
        cout << "Name: " << name << endl
            << "Age: " << age << endl << endl;
    }

};

int main()
{
    int count;
    cout << "Enter count -> ";
    cin >> count; // 3

    Student* mas = new Student[count];

    for (int i = 0; i < count; i++)
    {
        mas[i].Init();
    }
    for (int i = 0; i < count; i++)
    {
        mas[i].Output();
    }

    delete[] mas;
}