#pragma once
class MyString
{
	char* str; 
	int length; 
	static int countLiveObj;
	static int countCreatedObj;
public:
	MyString();
	MyString(int size);
	MyString(const char* initStr);
	MyString(const MyString& other);
	~MyString();
	
	void MyStrcpy(MyString& obj);
	bool MyStrStr(const char* substr);
	int MyChr(char c);
	int MyStrLen();
	void MyStrCat(MyString& b);
	void MyDelChr(char c);
	int MyStrCmp(MyString& b);
	
	void Print();
	void Input();

	static void GetCountLiveObj();
	static void GetCountCreatedObj();
};

