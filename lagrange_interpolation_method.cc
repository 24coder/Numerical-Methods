/******************************************************************************
 * LAB 6
 * NUMERICAL METHODS
 *
 *
 * Lagrange Interpolation Method
 *
 ******************************************************************************/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"How many data do you want to enter? ";
    cin>>n;
    float X[n],Y[n],x,numerator,denominator,sum=0;
    cout<<"Enter the value of x at which you want to interpolate: ";
    cin>>x;
    cout<<"Enter the value of x and y: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter x"<<i<<":";
        cin>>X[i];
        cout<<"Enter y"<<i<<":";
        cin>>Y[i];
    }
    for(int i=0;i<n;i++)
    {
        numerator=1;
        denominator=1;
        for(int j=0;j<n;j++)
        {
            if(i!=j)

            {
                numerator*=(x-X[j]);
                denominator*=(X[i]-X[j]);
            }
        }
        sum+=Y[i]*(numerator/denominator);
    }
    cout<<"The value of y at x="<<x<<"is:"<<sum<<endl;
    return 0;
}
