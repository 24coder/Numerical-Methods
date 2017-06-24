/* LAB 5
 * NUMERICAL METHODS
 *
 * SOLVING SYSTEM OF LINEAR EQUATIONS USING GAUSS JORDAN METHOD
 *
 * BY: ANISH BHUSAL
 *     072BCT505
 *     IOE, Pulchowk Campus
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
        for(int j=0;j<n+1;j++)
        {
            if(i!=j)
            {
                p=mat[j][i];
                for(int k=0;k<n+1;k++)
                {
                    mat[j][k]-=(p/m)*mat[i][k];
                }
            }
        }
    }
    cout<<"---------------The diagonal matrix is-------------------"<<endl;
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<n+1;j++)
        {
            cout<<setw(15)<<mat[i][j];
        }
        cout<<endl;
    }
    float x[n];
    cout<<"The solutions are "<<endl;
    for(int i=0;i<n;i++)
    {
        x[i]=mat[i][n]/mat[i][i];
        cout<<x[i]<<endl;
    }
    return 0;
}
