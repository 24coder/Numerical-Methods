/*  RK4SecondOrder.cc

    RK-4 Method for 2nd order differential equation

    Anish Bhusal
    072BCT505
*/
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
float func(float x, float y, float c)
{
    return (x*(c*c)-(y*y));
}
int main()
{
    float x0,y0,z0,h,xn,yn,zn,k1,l1,k2,l2,k3,l3,k4,l4,k,l;
    cout<<"Enter the value for x0,y0 and z0";
    cin>>x0>>y0>>z0;
    cout<<"Enter the value for h";
    cin>>h;
    cout<<"Enter the value for xn: ";
    cin>>xn;
    cout<<x0<<setw(20)<<y0<<setw(20)<<z0<<endl;
    do
    {
        k1=h*z0;
        l1=h*func(x0,y0,z0);
        k2=h*(z0+(l1/2));
        l2=h*func(x0+(h/2),y0+(k1/2),z0+(l1/2));
        k3=h*(z0+l2/2);
        l3=h*func(x0+(h/2),y0+(k2/2),z0+(l2/2));
        k4=h*(z0+l3);
        l4=h*func(x0+h,y0+k3,z0+l3);
        k=(k1+2*k2+2*k3+k4)/6;
        l=(l1+2*l2+2*l3+l4)/6;
        x0=x0+h;
        yn=y0+k;
        y0=yn;
        zn=z0+l;
        z0=zn;
        cout<<x0<<setw(20)<<y0<<setw(20)<<z0<<endl;
    }while(x0<=xn);

    return 0;
}
