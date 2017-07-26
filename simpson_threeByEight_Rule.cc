/***********************************************
 * LAB 8
 * NUMERICAL METHODS
 *
 *
 * NUMERICAL INTEGRATION
 * SIMPSON'S 3/8 RULE
 *
 ************************************************/
#include<iostream>
#include<cmath>
using namespace std;
float func(float x)
{
    return (1/(1+pow(x,2)));
}
int main()
{
    int n;
    float h,xn,x0,sum1=0,sum=0;
    cout<<"Enter the number of intervals ";
    cin>>n;
    cout<<"Enter the lower limit:";
    cin>>x0;
    cout<<"Enter the upper limit:";
    cin>>xn;
    h=(xn-x0)/n;
    for(int i=1;i<n;i++)
    {
        if((i%3)==0)
            sum+=2*func(x0+i*h);
        else
            sum+=3*func(x0+i*h);
    }
    sum1=func(x0)+func(xn);
    cout<<"The value of h is "<<h<<endl;
    cout<<"The value of integral is " <<((3*h/8)*(sum1+sum))<<endl;
    return 0;

}
