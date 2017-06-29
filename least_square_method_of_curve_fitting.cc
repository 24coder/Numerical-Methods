/*******************************************************************************
 *
 * LAB 6
 * NUMERICAL METHODS
 *
 * LEAST SQUARE METHOD OF CURVE FITTING FOR N DEGREE EQUATION
 *
 * The curve is supposed to be in the form, y=a+b*x+c*(x^2)+.........+k*(x^n)
 *       where, n is the degree of the equations and a,b,c....k are constants
 *
 ******************************************************************************/

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int d,n;
    cout<<"Enter the degree of the equation : ";
    cin>>d;
    cout<<"How many number of data do you want to enter?";
    cin>>n;
    if(d>n)
    {
        cout<<"Error! Number of points entered must be greater than the degree of equation"<<endl;
    }
    else
    {
        float X[n-1],Y[n-1],sum1=0,sum2=0;
        for(int i=0;i<n;i++)
        {
            cout<<"Enter the value of x"<<i<<":";
            cin>>X[i];
            cout<<"Enter the value of y"<<i<<":";
            cin>>Y[i];
        }
        float matrix[d+1][d+2];
        for(int i=0;i<=d;i++)
        {
            for(int j=0;j<=d;j++)
            {
                sum1=0;
                for(int k=0;k<=n-1;k++)
                {
                    sum1+=pow(X[k],i+j);
                }
                matrix[i][j]=sum1;
            }
        }
        for(int i=0;i<=d;i++)
        {
            sum2=0;
            for(int k=0;k<=n-1;k++)
                sum2+=((pow(X[k],i))*Y[k]);
            matrix[i][d+1]=sum2;
        }
        cout<<"The coefficients matrix of normals is"<<endl;
        for(int i=0;i<d+1;i++)
        {
            for(int j=0;j<=d+1;j++)
            {
                cout<<setw(15)<<matrix[i][j];
            }
            cout<<endl;
        }
        //-----------------------------------------------------
        float m,n;
        for(int i=0;i<(d+1);i++)
        {
            m=matrix[i][i];
            for(int j=0;j<(d+1);j++)
            {
                if(i!=j)
                {
                    n=matrix[j][i];
                    for(int k=0;k<(d+2);k++)
                    {
                        matrix[j][k]-=(n/m)*matrix[i][k];
                    }

                }
            }
        }

        float x[d+1];
        cout<<"The values of constants are "<<endl;
        for(int i=0;i<(d+1);i++)
        {
            x[i]=matrix[i][d+1]/matrix[i][i];
            cout<<x[i]<<endl;
        }

    }
    return 0;
}
