#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;   // pure virtual function
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Circle draw ho raha hai" << endl;
    }
};

int main() {
    Shape* s;
    Circle c;
    s = &c;
    s->draw();
    return 0;
}

// Abstraction ka matlab hai sirf important cheezein dikhana aur internal details chhupa dena.
