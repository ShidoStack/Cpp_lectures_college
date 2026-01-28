// pre-defined values in arrays

/*
#include <iostream>
using namespace std;

int main ()
{
    int arr[6] = {10, 15, 20, 23, 30, 37};

    cout << "Even numbers: "<< endl;
    for (int i=0; i<6; i++)
    {
        if(arr[i]%2==0)
        cout << arr[i]<<" ";
    }
    cout<<endl;

    cout << "Odd numbers: "<< endl;
    for (int i=0; i<6; i++)
    {
        if(arr[i]%2 !=0)
        cout << arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}  */


// User given values in array

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nEven numbers:\n";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            cout << arr[i] << " ";
    }
    cout << endl;

    cout << "\nOdd numbers:\n";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
            cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
