#include<iostream>
using namespace std;
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
int main()
{
    int n=10;
    int arr[n]={5,9,4,3,8,7,11,7,66,5};
    //step-1 find the smallest element in the array...
    //step-2 swap with the first index of unsorted array...
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<arr[min]) min=j;
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
        printarray(arr,n);
        cout<<endl;
    }
    return 0;
}