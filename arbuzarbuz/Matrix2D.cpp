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

Matrix2D::Matrix2D(const Matrix2D& arr)
{
	str = arr.str;
	st = arr.st;

	ptr = new int* [str];

	for (int i = 0; i < str; i++) {
		ptr[i] = new int[st];
		for (int j = 0; j < st; j++) {
			ptr[i][j] = arr.ptr[i][j];
		}
	}
}

Matrix2D::~Matrix2D()
{
	for (int i = 0; i < str; i++) {
		delete[]ptr[i];
	}
	delete[] ptr;
	cout << "Destructor\n";
}

Matrix2D Matrix2D::SumMatrix(const Matrix2D arr2)
{
	if (str != arr2.str || st != arr2.st) {
		cout << "Размеры не совпадают" << endl;
		return *this;
	}

	Matrix2D result(str, st);

	for (int i = 0; i < str; i++) {
		for (int j = 0; j < st; j++) {
			result.ptr[i][j] = this->ptr[i][j] + arr2.ptr[i][j];
		}
	}

	return result;
}

void Matrix2D::Input()
{
	for (int i = 0; i < str; i++) {
		for (int j = 0; j < st; j++) {
			ptr[i][j] = rand() % 100;
		}
	}
}

void Matrix2D::Print() const
{
	for (int i = 0; i < str; i++) {
		for (int j = 0; j < st; j++) {
			cout << ptr[i][j] << "\t";
		}
		cout << endl << endl;
	}
}
