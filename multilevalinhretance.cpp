#include <iostream>
using namespace std;

class Vehicle {
public:
    void start() {
        cout << "Vehicle started" << endl;
    }
};

class Car : public Vehicle {
public:
    void drive() {
        cout << "Car is driving" << endl;
    }
};

class SportsCar : public Car {
public:
    void turbo() {
        cout << "Turbo mode ON" << endl;
    }
};

int main() {
    SportsCar sc;
    sc.start();   // from Vehicle
    sc.drive();  // from Car
    sc.turbo();  // from SportsCar
}



//Multilevel inheritance me ek class dusri class se inherit karti hai, aur phir teesri class us derived class se inherit karti hai.