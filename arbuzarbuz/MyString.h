#pragma once
class MyString
{
	char* str; 
	int length; 
public:
	MyString();
	MyString(int size);
	MyString(const char* initStr);
	~MyString();
	
	void MyStrcpy(MyString& obj);
	bool MyStrStr(const char* substr);
	int MyChr(char c);
	int MyStrLen();
	void MyStrCat(MyString& b);
	void MyDelChr(char c);
	int MyStrCmp(MyString& b);
	
	void Print();
};

