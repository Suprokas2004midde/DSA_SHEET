#include<iostream>
#include<vector>
using namespace std;

void output(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void Merge(int arr[],int low,int high,int mid)
{
    int left=low;
    int right=mid+1;
    vector<int>temp;
    while(left<=mid && right<=high)
    {
        if(arr[left]<=arr[right])   
        {
            temp.push_back(arr[left]);
            left++;
        }
        else 
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    while(left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    for(int i=low;i<=high;i++)
    {
        arr[i]=temp[i-low];
    }
}
void Mergesort(int arr[],int low,int high)
{
    if(low==high) return;
    int mid=(low+high)/2;
    Mergesort(arr,low,mid);
    Mergesort(arr,mid+1,high);
    Merge(arr,low,high,mid);
    output(arr,high+1);
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
    int low=0;
    int high=n-1;
    Mergesort(arr,low,high);
    output(arr,n);
    return 0;
}