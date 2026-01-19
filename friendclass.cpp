#include <iostream>
using namespace std;

class A {
private:
    int x;

public:
    A() {
        x = 50;
    }

    friend class B;   // friend class
};

class B {
public:
    void show(A a) {
        cout << "x = " << a.x << endl;
    }
};

int main() {
    A objA;
    B objB;
    objB.show(objA);
    return 0;
}


// Jab ek poori class ko dusri class ka friend bana diya jata hai,
// to us friend class ke saare functions private members access kar sakte hain.
