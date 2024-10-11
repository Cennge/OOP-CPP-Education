#pragma once
#include <iostream>

class Circle
{
    double diameter;
public:
    void setDiameter(double d);
    double getDiameter() const;
    void input(); 
    void output() const;
};