#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box(int l) {
        length = l;
    }

    friend void showLength(Box b);  // friend function
};

void showLength(Box b) {
    cout << "Length = " << b.length << endl;
}

int main() {
    Box b1(10);
    showLength(b1);
    return 0;
}
//Friend function wo function hota hai jo class ka member nahi hota,
//lekin fir bhi class ke private data ko access kar sakta hai.
