#include <iostream>
#include <string>

using namespace std;

class Car {
private: // Инкапсуляция
    string name;
    int speed;

public:
    Car() {
        name = "";
        speed = 0;
    }

    Car(string n, int s) {
        name = n;
        speed = s;
    }

    // Геттеры
    string getName() { return name; }
    int getSpeed() { return speed; }

    // Операторы сравнения
    bool operator==(Car second) {
        return (name == second.name && speed == second.speed);
    }

    bool operator<(Car second) {
        return (speed < second.speed);
    }

    bool operator>(Car second) {
        return (speed > second.speed);
    }
};

int main() {
    Car c1("BMW", 250);
    Car c2("Audi", 220);

    cout << "Car 1: " << c1.getName() << ", Speed: " << c1.getSpeed() << endl;
    cout << "Car 2: " << c2.getName() << ", Speed: " << c2.getSpeed() << endl;

    if (c1 > c2) {
        cout << c1.getName() << " is faster!" << endl;
    }

    return 0;
}