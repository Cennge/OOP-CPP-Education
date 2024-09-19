#pragma once
class Matrix2D
{
	int** ptr;
	int str; // строки
	int st; //столбцы
public:
	Matrix2D();
	Matrix2D(int _str, int _st);
	~Matrix2D();
	void Input();
	void Print()const;
};

