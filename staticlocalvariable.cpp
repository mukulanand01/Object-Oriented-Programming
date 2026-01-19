#include <iostream>
using namespace std;

void demo() {
    static int a = 0;
    a++;
    cout << a << endl;
}

int main() {
    demo();
    demo();
    demo();
    return 0;
}


//Static Local Variable (Function ke andar)

//Function call ke baad bhi value yaad rakhta hai

//Memory sirf ek baar allocate hoti hai
