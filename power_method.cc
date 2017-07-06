/**
  * LAB 7
  * NUMERICAL METHODS
  *
  * Power Method (Applicable in computer engineering fields like graphics)
  *
  * Here, AX=Z=lambda*X where, lambda is an eigen value
  *
  */

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the order of the matrix : ";
    cin>>n;
    float A[n][n],X[n],Z[n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"Enter value of matrix element A"<<i<<j<<" : ";
            cin>>A[i][j];
        }
    }
    for(i=0;i<n;i++)
    {

            cout<<"Enter value of matrix element X"<<i<<" : ";
            cin>>X[i];

    }
    float error,max;

    do{


        for(i=0;i<n;i++)
        {
            Z[i]=0;
            for(j=0;j<n;j++)
            {
                Z[i]+=A[i][j]*X[j];
            }
        }
        max=fabs(Z[0]);
        for(i=1;i<n;i++)
        {
            if(max<fabs(Z[i]))
            {
                max=fabs(Z[i]);
            }

        }
        for(i=0;i<n;i++)
        {
            Z[i]/=max;
        }
        float temp=0;
        error=abs(Z[0]-X[0]);
        for(i=1;i<n;i++)
        {
            temp=abs(Z[i]-X[i]);
            if(error<temp)
            {
                error=temp;
            }

        }

        for(i=0;i<n;i++)
        {
            X[i]=Z[i];

        }

    }while(error>0.005);


    cout<<"The largest eigen value is"<<max<<endl;
    cout<<"The correspoding eigen vectors are"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<X[i]<<endl;
    }

}
