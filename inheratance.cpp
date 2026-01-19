// Inheritance me ek class doosri class ki properties aur functions ko inherit karti hai.


#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    string color;

    void eat() {
        cout << "eats\n";
    }

    void breathe() {
        cout << "breathes\n";
    }
};

class Fish : public Animal {   // class name should follow convention
public:
    int fins;

    void swim() {
        cout << "swims\n";
    }
}; 

int main() {
    Fish f;

    f.color = "Blue";
    f.fins = 4;

    f.eat();       // inherited
    f.breathe();   // inherited
    f.swim();      // own function

    return 0;
}
