#include<iostream>
using namespace std;
int main()
{
    int a=1, b=1, c;

    cout << "OUTPUT: " << endl << endl;
    cout << "Fibonacci Numbers: " << endl;
    
    cout << a << " " << b << " ";

    for (int i=1; i<=10; i++)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    return 0;
}