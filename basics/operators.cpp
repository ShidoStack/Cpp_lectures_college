// Conditional Operators

// //Example1: Take two numbers from input and compare which one is greatest (using all conditional operators )
// # include <iostream>
// using namespace std;

// int main()
// {
//     int a,b;
//     cout<<"Enter the first Number: ";
//     cin>>a;
//     cout<<"Enter the second Number: ";
//     cin>>b;

//     (a>b) ? cout << "Greatest number is: " << a << endl :
//     (b > a) ? cout << "Greatest number is: " << b << endl :
//               cout << "Both numbers are equal" << endl;
//     return 0;
// }

// // Example2: Check Pass or Fail
// #include <iostream>
// using namespace std;

// int main() {
//     int marks;
//     cout << "Enter marks: ";
//     cin >> marks;

//     (marks >= 65)
//         ? cout << "Student is Pass" << endl
//         : cout << "Student is Fail" << endl;

//     return 0;
// }



// // Example3: Check Odd Even
// #include <iostream>
// using namespace std;

// int main() 
// {
//     int num;
//    cout << "Enter the number: ";
//    cin >> num;

//     (num % 2 == 0) ? cout << "Number is Even" << endl :
//                      cout << "Number is Odd" << endl;

//     return 0;
// }

// Example4: Take three numbers from input and compare which one is greatest (using all conditional operators )

#include <iostream>
using namespace std;

int main()
{
    cout << "OUTPUT: " << endl << endl;
    
    int a, b, c;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;

    // Using nested ternary operators
    (a > b && a > c) ? cout << "Greatest number is: " << a << endl :
    (b > a && b > c) ? cout << "Greatest number is: " << b << endl :
    (c > a && c > b) ? cout << "Greatest number is: " << c << endl :
    (a == b && a > c) ? cout << "Greatest numbers are: " << a << " and " << b << endl :
    (a == c && a > b) ? cout << "Greatest numbers are: " << a << " and " << c << endl :
    (b == c && b > a) ? cout << "Greatest numbers are: " << b << " and " << c << endl :
    cout << "All three numbers are equal." << endl;

    return 0;
}
