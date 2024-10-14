#include <iostream>
#include "Hardware.h"
#include "Components.h"

using namespace std;

class PC {
    Cpu cpu;
    SSD ssd;
    RAM ram;

    Keyboard* keyboard;
    Mouse* mouse;
    Headphones* headphones;
    Monitor* monitor;

public:
    PC(Cpu c, SSD s, RAM r, Keyboard* kb = nullptr, Mouse* ms = nullptr, Headphones* hp = nullptr, Monitor* mn = nullptr)
        : cpu(c), ssd(s), ram(r), keyboard(kb), mouse(ms), headphones(hp), monitor(mn) {}

    void Output() {
        cout << "--- PC Config ---" << endl;
        cpu.Output();
        ssd.Output();
        ram.Output();

        if (keyboard) {
            cout << "--- Keyboard ---" << endl;
            keyboard->Output();
        }
        else cout << "No keyboard :(" << endl;

        if (mouse) {
            cout << "--- Mouse ---" << endl;
            mouse->Output();
        }
        else cout << "No mouse :(" << endl;

        if (headphones) {
            cout << "--- Headphones ---" << endl;
            headphones->Output();
        }
        else cout << "No headphones :(" << endl;

        if (monitor) {
            cout << "--- Monitor ---" << endl;
            monitor->Output();
        }
        else cout << "No monitor :(" << endl;

        cout << "------------------------" << endl;
    }
};

int main() {
    Cpu cpu;
    cpu.setPrice(300);
    cpu.setCapacity(8);
    cpu.setName("Intel i7");

    SSD ssd;
    ssd.setPrice(150);
    ssd.setCapacity(512);
    ssd.setBrand("Samsung");

    RAM ram;
    ram.setPrice(80);
    ram.setSize(16);
    ram.setType("DDR4");

    Keyboard keyboard;
    keyboard.setPrice(50);
    keyboard.setLayout("QWERTY");
    keyboard.setIsMechanical(true);

    Mouse mouse;
    mouse.setPrice(30);
    mouse.setDPI(1600);
    mouse.setIsWireless(false);

    Headphones headphones;
    headphones.setPrice(70);
    headphones.setIsWireless(true);
    headphones.setType("Over-Ear");

    Monitor monitor;
    monitor.setPrice(200);
    monitor.setSize(27);
    monitor.setResolution("1920x1080");

    PC myPC(cpu, ssd, ram, &keyboard, &mouse, &headphones, nullptr);
    myPC.Output();

    return 0;
}
