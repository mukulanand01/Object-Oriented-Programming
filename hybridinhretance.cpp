#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B : virtual public A {
};

class C : virtual public A {
};

class D : public B, public C {
};

int main() {
    D obj;
    obj.showA();   // no ambiguity due to virtual inheritance
}



//Hybrid inheritance = do ya zyada inheritance types ka combination
//(Commonly: multiple + multilevel / hierarchical)