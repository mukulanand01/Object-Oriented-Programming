#include <iostream>
using namespace std;

class Student {
public:
    int roll;

    Student() {   // default constructor
        roll = 1;
    }
};

int main() {
    Student s;
    cout << s.roll;
    return 0;
}
