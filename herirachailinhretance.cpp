#include <iostream>
using namespace std;

class Shape {
public:
    void info() {
        cout << "This is a shape" << endl;
    }
};

class Circle : public Shape {
public:
    void drawCircle() {
        cout << "Drawing Circle" << endl;
    }
};

class Square : public Shape {
public:
    void drawSquare() {
        cout << "Drawing Square" << endl;
    }
};

int main() {
    Circle c;
    Square s;

    c.info();   // from Shape
    c.drawCircle();

    s.info();   // from Shape
    s.drawSquare();
}


//Hierarchical inheritance me ek single base class se multiple derived classes inherit karti hain.