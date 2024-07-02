#include<iostream>
using namespace std;
int function(int arr[],int low ,int high)
{
    int i,j;
    i=low,j=high;
    int pivot=arr[low];
    while(i<j)
    {
        while(arr[i]<=pivot && i<high) i++;
        while(arr[j]>pivot && j>low) j--;
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
void Quick_sort(int arr[],int low,int high)
{
    if(low<high)
    {
        int partition;
        partition=function(arr,low,high);
        Quick_sort(arr,low,partition-1);
        Quick_sort(arr,partition+1,high);
    }
    
}
void output (int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void input(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int arr[n];
    input(arr,n);
    int low=0,high=n-1;
    Quick_sort(arr,low,high);
    output(arr,n);
    return 0;
}