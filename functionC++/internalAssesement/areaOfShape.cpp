#include<iostream>
using namespace std;

float circle()
{
    float r, area;
    cout<<"Enter radius: ";
    cin>>r;
    area = (22/7)*r*r;
    cout<<"Area of circle: "<<area<<endl;
    return 0;
}

float triangle()
{
    int b, h;
    float area;
    cout<<"Enter base: ";
    cin>>b;
    cout<<"Enter height: ";
    cin>>h;
    area=(b*h)/2;
    cout<<"Area of triangle: "<<area<<endl;
    return 0;
}

float rectangle()
{
    int l, b;
    float area;
    cout<<"Enter length: ";
    cin>>l;
    cout<<"Enter breadth: ";
    cin>>b;
    area=l*b;
    cout<<"Area of rectangle: "<<area<<endl;
    return 0;
}

float square()
{
    int length;
    float area;
    cout<<"enter length: ";
    cin>>length;
    area=length*length;
    cout<<"Area of square: "<<area<<endl;
    return 0;
}

int main()
{
    cout<<"Select shapes u wanna calcuate area of: "<<endl;
    cout<<"1. Circle"<<endl;
    cout<<"2. Triangle"<<endl;
    cout<<"3. Rectangle"<<endl;
    cout<<"4. Square"<<endl;
    cout<<"enter choice between 1-4: ";

    int choice;
    cin>>choice;

    switch(choice)
    {
        case 1:
        circle();
        break;

        case 2:
        triangle();
        break;

        case 3:
        rectangle();
        break;

        case 4:
        square();
        break;

        default:
        cout<<"Please enter the choice among the following options only!!!"<<endl;

    }
    return 0;
}