#include<iostream>
using namespace std;

class Add
{
    public:
    int sum(int a,int b)
    {
        return a+b;
    }

    float sum(float a,float b)
    {
        return a+b;
    }
};


int main()
{
    cout<<"Output: "<<endl;
    Add obj;

    cout<<obj.sum(10,20)<<endl;
    cout<<obj.sum(2.97f, 3.86f)<<endl;

    return 0;
}
