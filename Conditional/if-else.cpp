// If-else

#include<iostream>
using namespace std;

int main()
{
    cout << "OUTPUT: " << endl << endl;
    int marks;
    cout << "Enter the marks: ";
    cin >> marks;

    if (marks>100 || marks<0)
    {
        cout << "Invalid marks";
    }
    else if (marks>90)
    {
        cout << "Grade: A";
    }
    else if (marks<=90 && marks>75)
    {
        cout << "Grade: B";
    }
    else if (marks<=75 && marks>50)
    {
        cout << "Grade: C";
    }
    else
    {
        cout << "Grade: F (fail)... (need for improvement)";
    }
}

