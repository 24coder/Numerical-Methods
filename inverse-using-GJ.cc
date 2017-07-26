/* LAB 5-c
 * NUMERICAL METHODS
 *
 * Inverse of a Matrix Using Gauss Jordan Method
 *
 * BY: Anish Bhusal
 *     072BCT505
 *
 */
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the order of matrix: ";
    cin>>n;
    float mat[n][2*n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"Enter the value of augmented matrix element a "<<i+1<<j+1<<" ";
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(j=n;j<(2*n);j++)
        {
            if((j-i)==n)
                mat[i][j]=1;
            else
                mat[i][j]=0;

        }
    }
    cout<<"****************The augmented matrix is*****************"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<(2*n);j++)
        {
            cout<<setw(10)<<mat[i][j];
        }
        cout<<endl;
    }
    // calculation begins
    float m,p;
    for(i=0;i<n;i++)
    {
        m=mat[i][i];
        for(j=0;j<(n);j++)
        {
            if(i!=j)
            {
                p=mat[j][i];
                for(int k=0;k<(2*n);k++)
                {
                    mat[j][k]-=(p/m)*mat[i][k];
                }
            }

        }
    }
    for(i=0;i<n;i++)
    {
        m=mat[i][i];
        for(j=0;j<(n);j++)
        {
            if(i==j)
            {
                  for(int k=0;k<(2*n);k++)
                 {
                     mat[i][k]=mat[i][k]/m;
                 }
            }

        }
    }

    //---
    cout<<endl<<"The inverse matrix is: "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=n;j<(2*n);j++)
        {
            cout<<setw(10)<<mat[i][j];
        }
        cout<<endl;
    }


    return 0;

}
