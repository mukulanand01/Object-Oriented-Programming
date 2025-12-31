#include <iostream>
using namespace std;

class Student {
public:
    int roll;

    // parameterized constructor
    Student(int r) {
        roll = r;
    }

    // copy constructor
    Student(const Student &s) {
        roll = s.roll;
    }
};

int main() {
    Student s1(10);   // normal object
    Student s2 = s1;  // copy constructor called

    cout << s2.roll;
    return 0;
}
