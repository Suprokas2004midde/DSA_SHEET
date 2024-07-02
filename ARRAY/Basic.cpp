#include<iostream>
using namespace std;
int main()
{
    int arr[20][20]={0,1,5};
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<20;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}