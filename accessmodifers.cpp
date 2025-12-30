#include <iostream>
using namespace std;

class Student {
private:
    int marks;      //  private data (cannot be accessed directly)

public:
    // public method to set value
    void setMarks(int m) {
        marks = m;
    }

    // public method to get value
    int getMarks() {
        return marks;
    }
};

int main() {
    Student s1;

    // s1.marks = 90;    ERROR (marks is private)

    s1.setMarks(90);      //  allowed
    cout << s1.getMarks(); //  allowed

    return 0;
}
