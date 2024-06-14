#include<iostream>
using namespace std;
int main()
{
     int n1=3,m1=2,n2=2,m2=3;
    // cout<<"Enter The No. of Row and Column:(1st Matrix)"<<endl;
    // cin>>n1>>m1;
    // cout<<"Enter The No. of Row and Column:(2nd Matrix)"<<endl;
    // cin>>n2>>m2;
    
    int arr[n1][m1]={{1,2},{3,4},{5,6}},brr[n2][m2]={{1,2,3},{4,5,6}},res[n1][m2];
    if(m1==n2)
    {
        int t=n2;//measures hhow many times we should operate the loop..... 
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<m2;j++)
            {
                //res[2][1]=arr[i][0]*brr[0][j] + arr[i][1]*brr[1][j];
                //(arr[i][0],arr[i][1],arr[i][2])*(brr[0][j],brr[1][j],brr[2][j])etc
                res[i][j]=0; // Assigning the value zero.....
                for(int k=0;k<t;k++)
                {
                    res[i][j]+=(arr[i][k]*brr[k][j]); //increasing the value.....
                }
            }
        }
    }
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m2;j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}