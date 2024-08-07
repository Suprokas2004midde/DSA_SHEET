#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void find_number(int arr[],int brr[],int size)
{
    int temp[size+1]={0};
    for(int i=0;i<size;i++)
    {
        temp[arr[i]]+=1;
    }
    for(int i=1;i<size+1;i++)
    {
        if(temp[i]==2) brr[0]=temp[i];
        if(temp[i]==0) brr[1]=temp[i];
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int temp[2];
    find_number(arr,temp,n);
    cout<<temp[0]<<" "<<temp[1]<<endl;
    return 0;
}