#include <iostream>
using namespace std;

class Student {
public:
    static int count;

    Student() {
        count++;
    }
};

int Student::count = 0;

int main() {
    Student s1, s2, s3;
    cout << Student::count;
    return 0;
}
//static keyword ka use memory ko permanent (program ke end tak) banane ke liye hota hai.
//Ye class se related hota hai, object se nahi (most cases me).
