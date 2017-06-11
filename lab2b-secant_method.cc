/*
    NUMERICAL METHODS
    Lab 2
    Secant Method

    Anish Bhusal
    072BCT505
*/
#include<iostream>
#include<cmath>
using namespace std;
float func(float x)
{
    return ((x*x)+5*x+3); //function value returned from here
}
float calc(float x1,float x2)
{
    return ((x1*func(x2))-(x2*func(x1)))/(func(x2)-func(x1));
}
int main()
{
    float a,b,c,val;
    cout<<"Enter the values of a and b in [a,b] :";
    cin>>a>>b;
    if(func(a)==func(b))
    {
        cout<<"The graph of the equation is parallel to x-axis"<<endl;
    }
    else{
        do
        {
            c=calc(a,b);
            val=func(c);
            a=b;
            b=c;
        }while((abs(func(c)))>0.0005);

    cout<<"The root of the equation lies at x="<<c<<endl;

    }


    return 0;

}



