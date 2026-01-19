#include <iostream>
using namespace std;

class Test {
public:
    static int x;

    static void show() {
        cout << x << endl;
    }
};

int Test::x = 10;

int main() {
    Test::show();
    return 0;
}

//Static Member Function

//Sirf static members ko access kar sakta hai

//Object banane ki zarurat nahi
