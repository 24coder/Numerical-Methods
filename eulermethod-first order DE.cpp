/*
    Numerical Methods
    Lab 3

    Euler's Method

    Anish Bhusal
    072BCT505
*/
#include<iostream>
#include<iomanip>
using namespace std;
float func(float x,float y)
{
    return (x+3*y);
}
int main()
{
    float x0,y0,h,xn,yn;
    cout<<"Enter the value of x0 and y0 ";
    cin>>x0>>y0;

    cout<<"Enter the value for h ";
    cin>>h;
    cout<<"Enter the value for xn";
    cin>>xn;
        cout<<x0<<setw(10)<<y0<<endl;
    do{
        yn=y0+h*func(x0,y0);
        y0=yn;

        x0=x0+h;
        cout<<x0<<setw(10)<<yn<<endl;
    }while(x0<xn);
    return 0;
}
