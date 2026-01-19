// Destructor ek special member function hota hai jo object destroy hone par automatically call hota hai.
//Iska kaam hota hai allocated memory ko free karna aur resources clean up karna.

#include <iostream>
using namespace std;

class Car {
public:
    int *mileage;

    // Constructor
    Car() {
        mileage = new int;     // dynamic memory allocate
        *mileage = 12;
        cout << "Constructor called\n";
    }

    // Destructor
    ~Car() {
        delete mileage;        // memory free
        cout << "Destructor called\n";
    }
};

int main() {
    Car c1;   // object created

    cout << "Mileage: " << *c1.mileage << endl;

    return 0; // yahin par destructor automatically call hoga
}
