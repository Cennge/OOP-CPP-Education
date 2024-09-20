#pragma once
class Matrix2D
{
	int** ptr;
	int str; // строки
	int st; //столбцы
public:
	Matrix2D();
	Matrix2D(int _str, int _st);
	Matrix2D(const Matrix2D& arr);
	~Matrix2D();

	Matrix2D SumMatrix(const Matrix2D arr2);
	Matrix2D MultiMatrix(const Matrix2D arr2);
	Matrix2D TransposeMatrix();

	void SetElement(int row, int col, int value);
	int GetElement(int row, int col);

	void Input();
	void Print()const;
};

