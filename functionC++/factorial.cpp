#include<iostream>
using namespace std;
int fact(int num)
{
    int f=1;
    for (int i=1; i<=num; i++)
    {
        f=f*i;
    }
    return f;
}

int main()
{
    int num;
    cout<<"Enter a num: ";
    cin>>num;
    cout<<"factorial: " << fact(num)<<endl;
    return 0;
}