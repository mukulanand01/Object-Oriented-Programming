#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }
};

int main() {
    Dog d;
    d.eat();   // inherited from Animal
    d.bark();  // Dog's own function
}
 
//Single inheritance me ek derived class sirf ek base class se inherit karti hai.