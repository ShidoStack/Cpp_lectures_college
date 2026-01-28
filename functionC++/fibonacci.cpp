#include<iostream>
using namespace std;
int fibo(int n)
{
    int a=0;
    int b=1;
    int c;
    cout<<a<<" "<<b<<" ";
    for (int i=1; i<=n; i++)
    {
        c= a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}

int main()
{
    int n;
    cout<<"Enter num: ";
    cin>>n;
    fibo(n);
    return 0;
}