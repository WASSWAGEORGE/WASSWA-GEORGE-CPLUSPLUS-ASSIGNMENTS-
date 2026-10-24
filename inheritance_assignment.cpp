#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    string brand;
    int speed;

    void move() 
    {
        cout << brand << " is moving at " << speed << " km/h" << endl;
    }
};

class Car : public Vehicle {
public :
    int doors;

    void sound() 
    {
        cout << "Beep beep!" << endl;

    }

};

class ElectricCar : public Car {
public:
    int batteryLevel;

    void charge() {

        cout << "Charging... battery at " << batteryLevel << "%" << endl;
    }
};

int main() {
    ElectricCar tesla;
    tesla.brand = "Tesla";
    tesla.speed = 100;
    tesla.doors = 4;
    tesla.batteryLevel = 80;

    tesla.move();    // from Vehicle
    tesla.sound();    // from Car
    tesla.charge();  // from ElectricCar

    return 0;
}