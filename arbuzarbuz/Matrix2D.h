#include <iostream>

using namespace std;

template <typename T>
class Matrix2D {
    T** ptr;
    int str; // строки
    int st;  // столбцы

public:
    Matrix2D();
    Matrix2D(int _str, int _st);
    Matrix2D(const Matrix2D<T>& arr);
    ~Matrix2D();

    Matrix2D<T> SumMatrix(const Matrix2D<T>& arr2);
    Matrix2D<T> MultiMatrix(const Matrix2D<T>& arr2);

    void Input();
    void Print() const;
};

template <typename T>
Matrix2D<T>::Matrix2D() {
    ptr = nullptr;
    str = st = 0;
}

template <typename T>
Matrix2D<T>::Matrix2D(int _str, int _st) {
    str = _str;
    st = _st;
    ptr = new T * [str];
    for (int i = 0; i < str; i++) {
        ptr[i] = new T[st]{ 0 };
    }
}

template <typename T>
Matrix2D<T>::Matrix2D(const Matrix2D<T>& arr) {
    str = arr.str;
    st = arr.st;

    ptr = new T * [str];
    for (int i = 0; i < str; i++) {
        ptr[i] = new T[st];
        for (int j = 0; j < st; j++) {
            ptr[i][j] = arr.ptr[i][j];
        }
    }
}

template <typename T>
Matrix2D<T>::~Matrix2D() {
    for (int i = 0; i < str; i++) {
        delete[] ptr[i];
    }
    delete[] ptr;
    cout << "Destructor\n";
}

template <typename T>
Matrix2D<T> Matrix2D<T>::SumMatrix(const Matrix2D<T>& arr2) {
    if (str != arr2.str || st != arr2.st) {
        cout << "Размеры не совпадают" << endl;
        return *this;
    }

    Matrix2D<T> result(str, st);
    for (int i = 0; i < str; i++) {
        for (int j = 0; j < st; j++) {
            result.ptr[i][j] = this->ptr[i][j] + arr2.ptr[i][j];
        }
    }

    return result;
}

template <typename T>
Matrix2D<T> Matrix2D<T>::MultiMatrix(const Matrix2D<T>& arr2) {
    if (st != arr2.str) {
        cout << "Невозможно перемножить матрицы с такими размерами" << endl;
        return *this;
    }

    Matrix2D<T> result(str, arr2.st);
    for (int i = 0; i < str; i++) {
        for (int j = 0; j < arr2.st; j++) {
            result.ptr[i][j] = 0;
            for (int k = 0; k < st; k++) {
                result.ptr[i][j] += ptr[i][k] * arr2.ptr[k][j];
            }
        }
    }

    return result;
}

template <typename T>
void Matrix2D<T>::Input() {
    for (int i = 0; i < str; i++) {
        for (int j = 0; j < st; j++) {
            ptr[i][j] = rand() % 100;
        }
    }
}

template <typename T>
void Matrix2D<T>::Print() const {
    for (int i = 0; i < str; i++) {
        for (int j = 0; j < st; j++) {
            cout << ptr[i][j] << "\t";
        }
        cout << endl << endl;
    }
}