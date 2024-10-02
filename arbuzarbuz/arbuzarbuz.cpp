#include <iostream>

using namespace std;

template<class T>
void Init(T mas[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		mas[i] = rand() % 100 * 1.1;
		//cout << mas[i] << "\t";
	}
	cout << endl;
}

int main() {
    

    return 0;
}
