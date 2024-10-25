#include "AnimalWorld.h"
#include "Africa.h"
#include "NorthAmerica.h"
#include "Australia.h"
#include <iostream>

using namespace std;

void print_menu() {
    cout << "====== Меню Мир Животных ======" << endl;
    cout << "1. Добавить континент (Африка)" << endl;
    cout << "2. Добавить континент (Северная Америка)" << endl;
    cout << "3. Добавить континент (Австралия)" << endl;
    cout << "4. Кормить травоядных" << endl;
    cout << "5. Организовать охоту плотоядных" << endl;
    cout << "6. Выйти" << endl;
    cout << "Выберите опцию: ";
}

int main() {
    setlocale(LC_ALL, "ru");
    AnimalWorld world;
    bool is_running = true;
    int option;

    while (is_running) {
        system("cls");
        print_menu();
        cin >> option;

        switch (option) {
        case 1: {
            cout << "Добавляем континент Африка..." << endl;
            world.add_continent(new Africa());
            break;
        }
        case 2: {
            cout << "Добавляем континент Северная Америка..." << endl;
            world.add_continent(new NorthAmerica());
            break;
        }
        case 3: {
            cout << "Добавляем континент Австралия..." << endl;
            world.add_continent(new Australia());
            break;
        }
        case 4: {
            cout << "Все травоядные приступают к еде..." << endl;
            world.meals_herbivores();
            break;
        }
        case 5: {
            cout << "Все плотоядные начинают охоту..." << endl;
            world.nutrition_carnivores();
            break;
        }
        case 6: {
            cout << "Завершение работы программы..." << endl;
            is_running = false;
            break;
        }
        default:
            cout << "Ошибка. Выберите правильную опцию." << endl;
            break;
        }
        cout << endl;
        system("pause"); 
    }

    return 0;
}
