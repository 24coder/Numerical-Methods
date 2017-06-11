/*
    NUMERICAL METHODS
    Lab 2
    Bisection Method

    Anish Bhusal
    072BCT505
*/
#include<iostream>
#include<cmath>
using namespace std;
float func(float x)
{
    return ((x*x)+9*x+2); //function value returned from here
}
float mean(float x1,float x2)
{
    return(x1+x2)/2; //mean value of limits returned from here
}
int main()
{
    float a,b,c,val;
    cout<<"Enter the values of a and b in [a,b] :";
    cin>>a>>b;
    if((func(a)*func(b))<0)
    {
        do
        {
            c=mean(a,b);
            val=func(c);
            if((func(a)*func(c))<0)
            {
                b=c;
            }
            else
            {
                a=c;
            }


        }while((abs(func(c)))>0.0005);

    cout<<"The root of the equation lies at x="<<c<<endl;

    }
    else if((func(a)*func(b))>=0)
    {
        cout<<"Couldn't find the root"<<endl;
    }

    return 0;

}
