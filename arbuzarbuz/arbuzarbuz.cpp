#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    list<int>ar(10);
    generate(ar.begin(), ar.end(), []() {return rand() % 41 - 20; });

    ostream_iterator<int> os(cout, "\t");
    copy(ar.begin(), ar.end(), os);

    int count = count_if(ar.begin(), ar.end(), [](int a) {return a < 0; });
    cout << count << endl;
    
    
    int minRange, maxRange;
    cout << "¬ведите диапазон (от и до): ";
    cin >> minRange >> maxRange;

    copy_if(ar.begin(), ar.end(), [minRange, maxRange](int a) {return return a >= minRange && a <= maxRange; });


    return 0;
}
