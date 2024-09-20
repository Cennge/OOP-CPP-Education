#include<iostream>
#include "Matrix2D.h"
using namespace std;

int main()
{
	Matrix2D obj1(3, 5);
	obj1.Input();
	obj1.Print();

	Matrix2D obj2(5, 10);
	obj2.Input();
	obj2.Print();

}