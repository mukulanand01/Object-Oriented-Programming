#include <iostream>
using namespace std;

class Number {
public:
    int value;

    Number(int v) {
        value = v;
    }

    Number operator + (Number obj) {
        Number temp(0);
        temp.value = value + obj.value;
        return temp;
    }
};

int main() {
    Number n1(10), n2(20);
    Number n3 = n1 + n2;

    cout << n3.value;
    return 0;
}
 /// Compliletime polymoprohism and operator overloading
