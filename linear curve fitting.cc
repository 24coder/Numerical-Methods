//linear curve fitting using least square method
/* Anish Bhusal
    072BCT505
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    float a,b;
    cout<<"How many data do you want to enter :";
    cin>>n;
    float x[n],y[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value of x : ";
        cin>>x[i];
        cout<<"Enter the value of y : ";
        cin>>y[i];
    }

    float sumX=0,sumY=0, sumXY=0, sumX2=0;  //variables for sum of X,Y,XY and X^2 terms
    for(int i=0;i<n;i++)
    {
        sumX+=x[i];
        sumY+=y[i];
        sumXY+=x[i]*y[i];
        sumX2+=x[i]*x[i];
    }
    a=((sumY*sumX2)-(sumXY*sumX))/((n*sumX2)-(sumX*sumX));
    b=((n*sumXY)-(sumX*sumY))/((n*sumX2)-(sumX*sumX));
    cout<<"The value of a is "<<a<<" and b is "<<b<<endl;
    return 0;
}
