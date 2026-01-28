#include<iostream>
using namespace std;

int reverse(int num)
{
    int rev=0;
    while(num>0)
    {
        rev = rev*10;
        rev = rev + (num%10);
        num = num/10;
    }
    return rev;
}

int main()
{
    int num;
    cout<<"Enter num: ";
    cin>>num;
    cout<<"reverse: "<<reverse(num)<<endl;
    return 0;
}