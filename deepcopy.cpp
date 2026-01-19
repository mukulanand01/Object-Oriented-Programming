#include <iostream>
using namespace std;

class Car {
public:
    string name;
    string color;
    int *mileage;

    // Constructor
    Car(string name, string color) {
        this->name = name;
        this->color = color;
        mileage = new int;          // Dynamic allocation
        *mileage = 12;
    }

    // Copy Constructor (DEEP COPY)
    Car(Car &original) {
        cout << "Copying original to new..\n";
        name = original.name;
        color = original.color;
        mileage = new int;          // New memory allocated
        *mileage = *original.mileage; // Value copied (NOT address)
    }

    // Destructor (to avoid memory leak)
    ~Car() {
        delete mileage;
    }
};

int main() {
    Car c1("maruti 800", "white");

    Car c2(c1);   // Deep copy

    cout << c2.name << endl;
    cout << c2.color << endl;
    cout << *c2.mileage << endl;

    *c2.mileage = 10;

    cout << *c1.mileage << endl;   // Output: 12 (independent memory)

    return 0;
}

// Defination
//  Deep copy ek aisa process hai jisme naya object banaya jata hai aur dynamic memory ke liye alag (separate) memory allocate hoti hai, phir actual value copy hoti hai, address nahi.  