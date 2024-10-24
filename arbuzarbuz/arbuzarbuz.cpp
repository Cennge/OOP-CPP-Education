#include <iostream>
#include <vector>

using namespace std;


int main() {
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(4);
	arr.push_back(7);

	for (auto ptr = arr.begin(); ptr != arr.end(); ptr++) {
		cout << *ptr << "\t";
	}
}
