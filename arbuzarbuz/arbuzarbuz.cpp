#include <iostream>
#include "MyString.h"

using namespace std;

int main() {
    MyString stringExample("YoYo!!!");
    cout<<"Len = " << stringExample.MyStrLen() << endl;
    stringExample.Print();

    return 0;
}
