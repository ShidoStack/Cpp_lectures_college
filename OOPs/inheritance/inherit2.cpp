#include <iostream>
using namespace std;

class Student {
public:
    int roll;

    void getRoll() {
        cout << "Enter roll number: ";
        cin >> roll;
    }
};

class Marks {
public:
    int m1, m2;

    void getMarks() {
        cout << "Enter marks of two subjects: ";
        cin >> m1 >> m2;
    }
};

class Result : public Student, public Marks {
public:
    void display() {
        int total = m1 + m2;
        float avg = total / 2.0;

        cout << "\nRoll No.: " << roll << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Average Marks: " << avg << endl;
    }
};

int main() {
    Result r;

    r.getRoll();
    r.getMarks();
    r.display();

    return 0;
}
