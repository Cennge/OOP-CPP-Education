#include <iostream>

using namespace std;

class Fractions {
private:
    double numerator, denominator;

public:
    // Конструкторы
    Fractions() {
        numerator = 1;
        denominator = 1;
    }

    Fractions(int a, int b) {
        if (b == 0) {
            cout << "Error: Denominator cannot be zero" << endl;
            numerator = 0;
            denominator = 1;
        } else {
            numerator = a;
            denominator = b;
        }
    }

    // Инициализация
    void init(int x, int y) {
        if (y == 0) {
            cout << "Error: Denominator cannot be zero" << endl;
            numerator = 0;
            denominator = 1;
        } else {
            numerator = x;
            denominator = y;
        }
    }

    // Вывод дроби
    void printFraction() {
        cout << numerator << " / " << denominator << endl;
    }

    // Арифметические операции
    Fractions Sum(Fractions& b) {
        Fractions rez(numerator + b.numerator, denominator + b.denominator);
        return rez;
    }

    Fractions Minus(Fractions& b) {
        Fractions rez(numerator - b.numerator, denominator - b.denominator);
        return rez;
    }

    Fractions Multiplication(Fractions& b) {
        Fractions rez(numerator * b.numerator, denominator * b.denominator);
        return rez;
    }

    Fractions Divide(Fractions& b) {
        Fractions rez(numerator / b.numerator, denominator / b.denominator);
        return rez;
    }

    // Сеттеры и геттеры
    void setNumerator(int a) {
        numerator = a;
    }

    void setDenominator(int b) {
        if (b == 0) {
            cout << "Error: Denominator cannot be zero" << endl;
            denominator = 1;
        } else {
            denominator = b;
        }
    }

    int getNumerator() {
        return numerator;
    }

    int getDenominator() {
        return denominator;
    }
};

int main() {
    Fractions frac1(2, 4);
    Fractions frac2(3, 5);

    Fractions result = frac1.Sum(frac2);
    result.printFraction();

    return 0;
}
