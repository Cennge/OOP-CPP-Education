#pragma once
class MyString
{
	char* str; 
	int length; 
public:
	MyString();
	~MyString();
	
	void MyStrcpy(MyString& obj);
	bool MyStrStr(const char* substr);
	int MyChr(char c);
	int MyStrLen();
	void MyStrCat(MyString& b);
	void MyDelChr(char c);
	int MyStrCmp(MyString& b);
};

