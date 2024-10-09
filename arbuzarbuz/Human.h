#pragma once
class Human  // base class
{
protected:
	char* name;
	int age;
public:
	Human();
	Human(const char*, int);
	void Output();
	void Input();

	~Human();
};