#include <iostream>
#include "MyString.h"

using namespace std;

int main() {
    MyString stringExample("YoYo!!!");
    cout<<"Len = " << stringExample.MyStrLen() << endl;
    stringExample.Print();

    stringExample.Input();
    stringExample.Print();
    return 0;
}
