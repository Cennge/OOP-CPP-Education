#include<iostream>
#include "Matrix2D.h"
using namespace std;

int main()
{
	Matrix2D<Point> arr1(2, 2);
	arr1.Input();
	arr1.Print();

	return 0;
}