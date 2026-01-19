#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal sound karta hai" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog bhonkta hai" << endl;
    }
};

int main() {
    Animal* a;
    Dog d;
    a = &d;
    a->sound();   // runtime par decide
    return 0;
}


//Run time Polymphroism  virtual Function
