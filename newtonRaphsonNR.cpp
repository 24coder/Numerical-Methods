/* Numerical Methods
    Lab 3

    Netwon Raphson Method

    Anish Bhusal
    072BCT505
*/

#include<iostream>
#include<cmath>
using namespace std;
float f(float x)
{
    return ((x*x*x)+3*x*x-2);
}
float df(float x)
{
    return (3*x*x+3*x);
}
int main()
{
    float x0,xN;
    cout<<"Enter the value of approximate root x0 :";
    cin>>x0;

        int count=0; //checking oscillations
        bool rootfound;
        do
        {
            xN=x0-f(x0)/df(x0);
            x0=xN;
            count++;
            if(count==50)
            {
                cout<<"Oscillation occured : Couldn't locate exact root in 50 iterations"<<endl;
                rootfound=false;
                break;
            }
             if(df(x0)==0)
             {
                cout<<"The tangent line is parallel to x-axis: Couldn't locate root"<<endl;
                rootfound=false;
                break;
            }
            rootfound=true;

        }
        while((fabs(f(x0)))>0.0005);
        if(rootfound==true)
        {
            cout<<"The root of the equation is "<<x0<<endl;
        }

    return 0;

}
