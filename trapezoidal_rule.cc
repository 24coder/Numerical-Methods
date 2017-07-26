/*******************************************************
 * LAB 8
 * NUMERICAL METHODS
 *
 * NUMERICAL INTEGRATION
 * TRAPEZOIDAL RULE
 *
 *******************************************************/
#include<iostream>
#include<cmath>
using namespace std;
float func(float x)
{
    return (1/(1+(pow(x,2))));
}
int main()
{
    int n;
    float h,xn,x0,sum1=0,sum2=0;
    cout<<"Enter the number of intervals ";
    cin>>n;
    cout<<"Enter the lower limit";
    cin>>x0;
    cout<<"Enter the upper limit";
    cin>>xn;
    h=(xn-x0)/n;
    sum1=func(x0)+func(xn);
    for(int i=1;i<n;i++)
    {
        x0=x0+h;
        sum2+=func(x0);

    }
    cout<<"The value of h is "<<h<<endl;
    cout<<"The value of integral is "<<((h/2)*(sum1+2*sum2))<<endl;
    return 0;
}
