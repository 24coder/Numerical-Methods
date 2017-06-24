/* Numerical Methods
    Lab 3

    R-K4 Method

    Anish Bhusal
    072BCT505o
*/
#include<iostream>
#include<iomanip>
using namespace std;
float func(float x,float y)
{
    return (x+y);
}
int main()
{
    float x0,y0,h,xn,yn,m1,m2,m3,m4,m;
    cout<<"Enter the initial values x0 and y0 ";
    cin>>x0>>y0;
    cout<<"Enter the value of h ";
    cin>>h;
    cout<<"Enter the value of xn";
    cin>>xn;
    cout<<x0<<setw((10))<<y0<<endl;
    do
    {
        m1=h*func(x0,y0);
        m2=h*func(x0+(h/2),y0+(m1/2));
        m3=h*func(x0+(h/2),y0+(m2/2));
        m4=h*func(x0+h,y0+m3);

       // cout<<x0<<"     ";
        m=(m1+2*m2+2*m3+m4)/6;
        yn=y0+m;
        y0=yn;
         x0=x0+h;
        //cout<<yn<<endl;
        cout<<x0<<setw((10))<<yn<<endl;

    }while(x0<xn);
    cout<<"Hence the value of y at x="<<xn<<"is "<<yn<<endl;

}
