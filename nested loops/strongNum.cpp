#include <iostream>
using namespace std;
int main()
{
    cout << "OUTPUT: " << endl << endl;

    int num1, x, rem, num2 = 0;

    cout << "Enter a Number: ";
    cin >> num1;

    x = num1;

    while (x > 0)
    {
        rem = x % 10;
        x = x / 10;

        int fact = 1;   

        for (int i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }

        num2 = num2 + fact;
    }

    if (num1 == num2)
    {
        cout << num1 << " is a Strong Number." << endl;
    }
    else
    {
        cout << num1 << " is NOT a Strong Number." << endl;
    }

    return 0;
}