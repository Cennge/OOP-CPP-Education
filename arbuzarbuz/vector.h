#pragma once
#include <iostream>

class Vector {
private:
    int* arr;
    int size;

    friend ostream& operator<<(ostream& os, Vector obj);
    friend istream& operator>>(istream& is, Vector& obj);
public:
    Vector();                
    Vector(int s);        
    ~Vector();               

    void InputRand();       
    void Print();           

    void PushBack(int a);  
    int PopBack();        

    void PushForward(int a); 
    int PopForward();     

    void PushIndex(int a, int index);
    int PopIndex(int index); 

    void PushArr(int newArr[], int newSize);

    int* getArray() const;
    int getSize() const;    

    void setArray(int* newArr, int newSize);
    
    Vector operator-(int a);
    Vector operator+(int a); 
    Vector operator*(int a); 
    
    Vector operator+(const Vector& obj);

    Vector& operator++();
    Vector operator++(int);
    Vector& operator--();
    Vector operator--(int);

    Vector& operator+=(int a);
    Vector& operator-=(int a);
    Vector& operator*=(int a);

    Vector& operator=(const Vector& obj);
};


Vector operator-(int a, const Vector& obj);