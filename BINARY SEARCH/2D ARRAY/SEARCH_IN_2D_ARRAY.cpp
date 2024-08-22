#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int target=34;
    int arr[3][4]={1,3,5,7,10,11,16,20,23,30,34,60};
    int i=3,j=4;
    int lowr=0,highr=i-1;
    int row=-1,flag=0;
    while(lowr<=highr)
    {
        int midr=(lowr+highr)/2;
        if(arr[midr][0]<=target && target<=arr[midr][j-1])
        {
            row=midr;
            lowr=midr+1;
        }
        else if(arr[midr][0]>target) highr=midr-1;
    }
    int lowc=0,highc=j-1;
    while(lowc<=highc)
    {
        int mid=(lowc+highc)/2;
        if(arr[row][mid]==target)
        {
            flag=1;
            cout<<"Element Found"<<endl;
            break;
        }
        else if(arr[row][mid]<target) lowc=mid+1;
        else highc=mid-1;
    }
    if(flag==0) cout<<"Element Not found"<<endl;
    return 0;
}