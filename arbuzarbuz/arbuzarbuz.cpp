#include <iostream>
using namespace std;

class Human
{
public:
	Human() {};
	Human(string _name, int _age) {
		name = _name;
		age = _age;
	}
	virtual void Print() {
		cout << "Name: " << name << endl
			<< "Age: " << age << endl;
	}

protected:
	string name;
	int age;
};

class Student : public Human {
	string Academy;
public:
	Student(string _name, int _age, string _academy) : Human(_name, _age) {
		Academy = _academy;
	}
	virtual void Print() {
		Human::Print();
		cout << "Academy: " << Academy << endl;
	}
	string GetAcad() {
		return Academy;
	}
};

void Task(Human* obj) {
	obj->Print();
	string str = dynamic_cast<Student*>(obj)->GetAcad(); //Костыль!!!
	cout << str << endl
		;
}

int main()
{
	Student obj("Ilya", 18, "Itstep");
	Task(&obj);
	return 0;
}
