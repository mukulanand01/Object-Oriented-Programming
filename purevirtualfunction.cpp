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
    // Shape s;  ❌ object nahi ban sakta
    Shape* s;
    Circle c;
    s = &c;
    s->draw();
    return 0;
}

// 
// 
// Pure virtual function wo function hota hai jiska sirf declaration hota hai, definition nahi, aur jise child class ko implement karna hi padta hai.
