#pragma once
class Human  // base class
{
protected:
    char* name;
    int age;
    double salary;  

public:
    Human();
    Human(const char*, int, double);  
    virtual void Output();
    virtual void Salary(); 
    void Input();

    virtual ~Human();
};
