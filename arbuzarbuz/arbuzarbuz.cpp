#include<iostream>
#include "Matrix2D.h"
using namespace std;
//Создать класс для работы с матрицами.
//Предусмотреть, как минимум, функции для сложения матриц, умножения матриц, транспонирования матриц,
// установка и получение произвольного
//  элемента матрицы(доступ через индексы)

int main()
{
	Matrix2D obj1(3, 5);
	obj1.Input();
	obj1.Print();

	Matrix2D obj2(5, 10);
	obj2.Input();
	obj2.Print();

}