#include<iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}

float add(float a, float b){
    return a+b;
}

int main()
{
    cout<<add(30, 79);
    cout<<add(39.48f, 67.85f);
    return 0;
}