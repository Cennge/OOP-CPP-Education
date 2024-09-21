#pragma once

class Vector {
private:
    int* arr;
    int size;
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
    
    Vector operator-(int a);
    Vector operator+(int a); 
    Vector operator*(int a); 
    
    Vector operator+(const Vector& obj);
};
