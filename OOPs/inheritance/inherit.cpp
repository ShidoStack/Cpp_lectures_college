#include <iostream>
using namespace std;


class Student {
public:
    int roll;
};

class Marks {
public:
    int m1 = 80, m2 = 85;
};

class Result : public Student, public Marks {
public:
    void display() {
        cout << "Roll No.: " << roll << endl;
        cout << "Total Marks: " << m1 + m2 << endl;
    }
};

int main() {
    Result r;
    r.roll = 101;   
    r.display();
    return 0;
}
