#include<iostream>
#include<Windows.h>
using namespace std;

class Student
{
	char* name;
	int age;
public:
	Student();
	Student(const char*, int);
	Student(const Student& obj);
	void Output();
	~Student();

};
Student::Student()
{
	name = nullptr;
	age = 0;
}
Student::Student(const char* Name, int Age)
{
	name = new char[strlen(Name) + 1];
	strcpy_s(name, strlen(Name) + 1, Name);
	age = Age;
}
void Student::Output()
{
	cout << "Name: " << name << endl
		<< "Age: " << age << endl << endl;
}
Student::~Student()
{

	delete[] name;

	cout << "Destruct\n";
	Sleep(1000);

}
Student::Student(const Student& obj) {
	name = new char[strlen(obj.name) + 1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);
	age = obj.age;
}

int main()
{
	
	system("pause");
}