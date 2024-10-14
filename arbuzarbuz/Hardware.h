#pragma once
#include <iostream>
#include <string>

using namespace std;

class Keyboard {
private:
	int price;
	std::string layout;
	bool isMechanical;
public:
	int getPrice();
	std::string getLayout();
	bool getIsMechanical();

	void setPrice(int p);
	void setLayout(std::string l);
	void setIsMechanical(bool m);

	void Output();
};

class Mouse {
private:
	int price;
	int dpi;
	bool isWireless;
public:
	int getPrice();
	int getDPI();
	bool getIsWireless();

	void setPrice(int p);
	void setDPI(int d);
	void setIsWireless(bool w);

	void Output();
};

class Headphones {
private:
	int price;
	bool isWireless;
	std::string type;
public:
	int getPrice();
	bool getIsWireless();
	std::string getType();

	void setPrice(int p);
	void setIsWireless(bool w);
	void setType(std::string t);

	void Output();
};

class Monitor {
private:
	int price;
	int size;  // in inches
	std::string resolution;
public:
	int getPrice();
	int getSize();
	std::string getResolution();

	void setPrice(int p);
	void setSize(int s);
	void setResolution(std::string r);

	void Output();
};


