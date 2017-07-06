/**
  * LAB 7
  * NUMERICAL METHODS
  *
  * Power Method (Applicable in computer engineering fields like graphics)
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
    float A[n][n],X[n][1],Z[n][1];
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
            cin>>X[i][0];

    }
    float error,max;

    do{


        for(i=0;i<n;i++)
        {
            Z[i][0]=0;
            for(j=0;j<n;j++)
            {
                Z[i][0]+=A[i][j]*X[j][0];
            }
        }
        max=fabs(Z[0][0]);
        for(i=1;i<n;i++)
        {
            if(max<fabs(Z[i][0]))
            {
                max=fabs(Z[i][0]);
            }

        }
        for(i=0;i<n;i++)
        {
            Z[i][0]/=max;
        }
        float temp=0;
        error=abs(Z[0][0]-X[0][0]);
        for(i=1;i<n;i++)
        {
            temp=abs(Z[i][0]-X[i][0]);
            if(error<temp)
            {
                error=temp;
            }

        }

        for(i=0;i<n;i++)
        {
            X[i][0]=Z[i][0];

        }

    }while(error>0.005);


    cout<<"The largest eigen value is"<<max<<endl;
    cout<<"The correspoding eigen vectors are"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<X[i][0]<<endl;
    }

}
