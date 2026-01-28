// Loops

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i=1;
//     while (i<=5)
//     {
//         cout << i << " ";
//         i++;
//     }
//     return 0;
// }

// print even number till 50

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i = 2;
//     cout << "Even numbers: " << endl;

//     while (i<=50)
//     {
//         cout << i << " ";
//         i += 2;
//     }
//     return 0;
// }

// Sum of first 10 numbers

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 1, sum = 0;
//     while (n<=10)
//     {
//         sum = sum + n;
//         n += 1;
//     }
//     cout << "Sum of first ten numbers: " << sum ;
//     return 0;
// }

// Reverse of the numbers

#include <iostream>
using namespace std;
int main()
{
    cout << "OUTPUT: " << endl << endl;
    
    int num, reverse = 0;
    cout << "Enter the number: ";
    cin >> num;
    cout << endl;

    while (num>0)
    {
        reverse = reverse*10;
        reverse = reverse + (num % 10) ;
        num = (num /= 10);
    }
    cout << "Reverse of number: " << reverse << endl;
    return 0;
}

// Factorial of a number

#include <iostream>
using namespace std;
int main()
{
   long int n, fact=1;
    cout << "Enter number: ";
    cin >> n;
    cout << endl;

    while (n>=1)
    {
        fact = fact*n;
        n -=1;
    }
    cout << "Factorial: " << fact << endl;
    return 0;
}