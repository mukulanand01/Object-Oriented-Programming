

#include <iostream>
using namespace std;

class Father {
public:
    void strength() {
        cout << "Physical strength" << endl;
    }
};

class Mother {
public:
    void care() {
        cout << "Emotional care" << endl;
    }
};

class Child : public Father, public Mother {
public:
    void skill() {
        cout << "Technical skills" << endl;
    }
};

int main() {
    Child c;
    c.strength();  // from Father
    c.care();      // from Mother
    c.skill();     // own
}


// Multiple inheritance me ek derived class ek se zyada base classes se inherit karti hai.