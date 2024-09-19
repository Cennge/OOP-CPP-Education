#include "Matrix2D.h"
#include <iostream>

using namespace std;

Matrix2D::Matrix2D()
{
	ptr = nullptr;
	str = st = 0;
}

Matrix2D::Matrix2D(int _str, int _st)
{
	str = _str;
	st = _st;
	ptr = new int* [str];

	for (int i = 0; i < str; i++)
	{
		ptr[i] = new int[st] {0};
	}
}

Matrix2D::~Matrix2D()
{
	for (int i = 0; i < str; i++)
	{
		delete[]ptr[i];
	}
	delete[] ptr;
	cout << "Destructor\n";
}

void Matrix2D::Input()
{
	for (int i = 0; i < str; i++)
	{
		for (int j = 0; j < st; j++)
		{
			ptr[i][j] = rand() % 100;
		}
	}
}

void Matrix2D::Print() const
{
	for (int i = 0; i < str; i++)
	{
		for (int j = 0; j < st; j++)
		{
			cout << ptr[i][j] << "\t";
		}
		cout << endl << endl;
	}
}
