#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={85,2,3,7,8,5,9,4,11};
    int rowsum,prevsum=0,maxrow;
    for(int i=0;i<3;i++)
    {
        rowsum=0;
        for(int j=0;j<3;j++)
        {
            rowsum=rowsum+arr[i][j];
        }
        if(rowsum>prevsum)
        {
            maxrow=i;
            prevsum=rowsum;
        }
    }
    cout<<"The row with maximum sum is: "<<maxrow+1<<endl;
    cout<<"The maximum sum is: "<<prevsum<<endl;
    return 0;
}