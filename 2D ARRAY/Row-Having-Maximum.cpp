#include<iostream>
using namespace std;
int main()
{
    int arr[3][4]={1,0,1,1,0,1,0,1,1,0,0,1};
    int count,prevcount=0,maxrow;
    for(int i=0;i<3;i++)
    {
        count=0;
        for(int j=0;j<4;j++)
        {
            if(arr[i][j]==1) count++;
        }
        if(count>prevcount)
        {
            maxrow=i;
            prevcount=count;
        }
    }
    cout<<"The row with maximum sum is: "<<maxrow+1<<endl;
    cout<<"The maximum sum is: "<<prevcount<<endl;
    return 0;
}