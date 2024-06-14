#include<iostream>
using namespace std;
int main()
{
    int arr[2][2]={1,2,3,4},brr[2][2]={5,6,7,8},result[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            result[i][j]=arr[i][j]+brr[i][j];
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}