#include<iostream>
#include "Matrix2D.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    Matrix2D<Point> mat1(2, 2);
    mat1.Input();
    mat1.Print();

    return 0;
}
