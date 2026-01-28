// Strings

#include <iostream>
using namespace std;

int main()
{
    cout << "OUTPUT: " << endl << endl;
    
    string s1= "Hello";
    string s2= "World";
    string s3;

    // Concatenation using +
    s3 = s1 + " " + s2;
    cout << "Concatenated string: " << s3 << endl;

    // Append using +=
    s1 += s2;
    cout << "After += operator: " << s1 << endl;

    // Or
    s2 += s1;
    cout << "After += operator: " << s2 << endl;

    // Comparison using ==
    if (s1 == s2)
    {
        cout << "Strings are Equal" << endl;
    }
    else 
    {
        cout << "Strings are Not Equal" << endl;
    }

    // Comparison using <
    if (s1 < s2)
    {
        cout << s1 << " comes before " << s2 << endl;
    }
    else 
    {
        cout << s2 << " comes before " << s1 << endl;
    }

    // Access character using []
    cout << "Third character of s2: " << s2[2] << endl;

    return 0;

}
