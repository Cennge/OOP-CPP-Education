#include<iostream>
#include<Windows.h>
using namespace std;

class Car {
	char* model;
	char* country;
	double price;
	int year;
public:
	Car() {
		model = nullptr;
		country = nullptr;
		price = 0;
		year = 0;
	}

	Car(const char* model1, const char* country1, double price1, int year1) {
		model = new char[strlen(model1) + 1];
		strcpy_s(model, strlen(model1) + 1, model1);

		country = new char[strlen(country1) + 1];
		strcpy_s(country, strlen(country1) + 1, country1);

		price = price1;
		year = year1;
	}

	~Car() {
		delete[] model;
		delete[] country;
	}

	void SetModel(const char* NemModel) {
		if (model != nullptr) delete[] model;
		model = new char[strlen(NemModel) + 1];
		strcpy_s(model, strlen(NemModel) + 1, NemModel);
	}

	void SetCountry(const char* NemCountry) {
		if (country != nullptr) delete[] country;
		country = new char[strlen(NemCountry) + 1];
		strcpy_s(country, strlen(NemCountry) + 1, NemCountry);
	}

	void SetPrice(int NewPrice) {
		price = NewPrice;
	}

	void SetYear(int NewYear) {
		year = NewYear;
	}

	const char* GetModel() {
		return model;
	}

	const char* GetCountry() {
		return country;
	}

	double GetPrice() {
		return price;
	}

	int GetYear() {
		return year;
	}

	void Input() {
		char bufferModel[100];
		char bufferCountry[100];

		cout << "Enter model: ";
		cin.ignore();
		cin.getline(bufferModel, 100);

		cout << "Enter country: ";
		cin.getline(bufferCountry, 100);

		cout << "Enter price: ";
		cin >> price;
		cin.ignore();

		cout << "Enter year: ";
		cin >> year;
		cin.ignore();

		SetModel(bufferModel);
		SetCountry(bufferCountry);
	}

	void PrintCar() {
		cout << "Model: " << model << endl;
		cout << "Country: " << country << endl;
		cout << "Price: " << price << endl;
		cout << "Year: " << year << endl;
	}
};

int main() {
	Car car1("Bmw", "Germany", 49000, 2018);
	cout << car1.GetModel() << endl;

	Car car2;
	car2.Input();
	cout << car2.GetCountry() << endl;

	system("pause");
	return 0;
}
