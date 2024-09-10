#include "MyString.h"

MyString::MyString() {
	str = nullptr;
	length = 0;
}

MyString::~MyString() {

}


void MyString::MyStrcpy(MyString& obj) {
	if (str == nullptr) return;
	delete[] obj.str;

	obj.length = length;
	obj.str = new char[length + 1];

	for (int i = 0; i < length; i++) {
		obj.str[i] = str[i];
	}

	obj.str[length] = '\0';
}

bool MyString::MyStrStr(const char* str) {

	return false;
}

int MyString::MyChr(char c) {

	return 0;
}

int MyString::MyStrLen() {

	return 0;
}

void MyString::MyStrCat(MyString& b) {

}

void MyString::MyDelChr(char c) {

}

int MyString::MyStrCmp(MyString& b) {

	return 0;
}
