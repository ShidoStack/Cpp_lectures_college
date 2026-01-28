#include <iostream>
using namespace std;

int swap()
{
    int a, b, c;
    cout<<"enter 1st num: ";
    cin>>a;
    cout<<"enter 2nd num: ";
    cin>>b;

    c=a;
    a=b;
    b=c;
    cout<<"After Swapping: "<<endl;
    cout <<"1st number: "<<a<<endl;
    cout<<"2nd number: "<<b<<endl;
    return 0;
}

int main()
{
    cout<< "OUTPUT:  "<<endl;
    swap();
    cout<<endl;
}