#include <iostream>
using namespace std;

class Student {
public:
    int roll;

    Student(int r) {   // parameterized constructor
        roll = r;
    }
};

int main() {
    Student s(10);
    cout << s.roll;
    return 0;
}
