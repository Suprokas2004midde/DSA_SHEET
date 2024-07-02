#include<iostream>
using namespace std;
void input(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}
void Reverse(int arr[],int low,int high)
{
    if (low>=high) return;
    swap(arr[low],arr[high]);
    Reverse(arr,low+1,high-1);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    input(arr,n);
    int low=0;
    int high=n-1;
    Reverse(arr,low,high);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}