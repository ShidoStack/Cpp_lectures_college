#include<iostream>
using namespace std;

int main()
{
    int a[5];
    cout<<"Enter five integers numbers: "<<endl;
    for(int i=0; i<=4; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<=4; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}