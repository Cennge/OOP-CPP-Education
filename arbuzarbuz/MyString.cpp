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

bool MyString::MyStrStr(const char* substr) {
	if (str == nullptr or substr == nullptr) return false;

	for (int i = 0; str[i] != '\0'; i++) {
		int j = 0;

		while (substr[j] != '\0' and str[i + j] != '\0' and str[i + j] == substr[j]) {
			j++;
		}

		if (substr[j] == '\0') return true;
	}

	return false; 
}

int MyString::MyChr(char c) {
	if (str == nullptr) return -1; 

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == c) { 
			return i; 
		}
	}

	return -1;
}

int MyString::MyStrLen() {
	if (str == nullptr) return 0; 

	int length = 0; 

	while (str[length] != '\0') {
		length++; 
	}

	return length;
}

void MyString::MyStrCat(MyString& b) {
	if (str == nullptr) return; 
	if (b.str == nullptr) return;

	int newLength = MyStrLen() + b.MyStrLen();
	char* newStr = new char[newLength + 1];

	int i = 0;
	for (; str[i] != '\0'; i++) {
		newStr[i] = str[i];
	}

	for (int j = 0; b.str[j] != '\0'; j++, i++) {
		newStr[i] = b.str[j];
	}

	newStr[newLength] = '\0';
	delete[] str;
	str = newStr;
	length = newLength;
}

void MyString::MyDelChr(char c) {
	if (str == nullptr) return;

	int j = 0;

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] != c) {
			str[j++] = str[i]; 
		}
	}

	str[j] = '\0';
	length = j;
}

int MyString::MyStrCmp(MyString& b) {
	if (str == nullptr && b.str == nullptr) return 0; 
	if (str == nullptr) return -1; 
	if (b.str == nullptr) return 1; 

	int i = 0;
	while (str[i] != '\0' && b.str[i] != '\0') {
		if (str[i] < b.str[i]) return -1; 
		if (str[i] > b.str[i]) return 1; 
		i++;
	}

	if (str[i] == '\0' && b.str[i] == '\0') return 0; 
	if (str[i] == '\0') return -1; 
	return 1; 
}
