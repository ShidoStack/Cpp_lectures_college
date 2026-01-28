#include <iostream>
using namespace std;
int main()
{
    int n=1;
    cout << "OUTPUT: " << endl << endl;

    for (int i=5; i >= n; i-- )
        {
            for (int j=1; j<=i; j++)
            {
                cout << "*";
            }
            cout << endl;
        
        }
    return 0;
}