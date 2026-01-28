#include <iostream>
using namespace std;

// class student {
//     public:
//     int roll;
//     string name;

//     void display() {
//         cout << "Roll no: " << roll << endl;
//         cout << "Name: " << name << endl;
//     }
// };

// int main() {
//     student s1;
//     s1.roll = 150;
//     s1.name = "Karamveer Singh Qaumi";

//     s1.display();

//     return 0;
// }


class book {
    public:
    string bookName;
    float price;
    string edition;
    string author ;

    void show() {
        cout << "Name of Book: " << bookName << endl;
        cout << "Price of Book: " << price << endl;
        cout << "Edition of Book: " << edition << endl;
        cout << "Author: " << author << endl;
    }

};

int main() {

    cout << endl;
    cout << "OUTPUT: " << endl << endl;

    book b1;
    b1.bookName = "Harry Potter";
    b1.price = 376.96;
    b1.edition = "Seventh";
    b1.author = "J.K. Rowlings";

    b1.show();

    return 0;
}