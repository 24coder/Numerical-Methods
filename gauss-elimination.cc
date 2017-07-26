/* LAB 5
 * NUMERICAL METHODS
 *
 * SOLVING SYSTEM OF LINEAR EQUATION USING GAUSS ELIMINATION METHOD
 *
 * BY: ANISH BHUSAL
 *     072BCT505
 *
 *
 */
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of unknown: ";
    cin>>n;
    float mat[n][n+1];
    //INPUT for augmented matrix coefficent matrix:constant
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            cout<<"Enter the value of augment matrix element a "<<i+1<<j+1<<" ";
            cin>>mat[i][j];
        }
    }
    //Displaying entered augmented matrix
    cout<<"---------The entered matrix is-----------"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            cout<<setw(15)<<mat[i][j];
        }
        cout<<endl;
    }
    float m,p;
    for(int i=0;i<n;i++)
    {
        m=mat[i][i];
        for(int j=i+1;j<n;j++)
        {



                p=mat[j][i];
                for(int k=0;k<n+1;k++)
                {
                    mat[j][k]-=(p/m)*mat[i][k];
                }

        }

    }
    cout<<"***************The pivoted matrix is**********************"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            cout<<setw(15)<<mat[i][j];
        }
        cout<<endl;
    }

    float x[n],sum;  //will contain the solutions after backward substitution
    for(int i=n-1;i>=0;i--)
    {
        sum=0;
        for(int j=i+1;j<n;j++)
        {
            sum+=mat[i][j]*x[j];
        }
        x[i]=(mat[i][n]-sum)/mat[i][i];

    }
      cout<<endl<<"********The solutions are*************"<<endl;
    for(int i=0;i<n;i++)
    {
          cout<<x[i]<<endl;
    }
    return 0;




}
