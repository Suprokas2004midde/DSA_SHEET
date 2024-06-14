#include<iostream>
using namespace std;
void Insertion_sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int cur=i;
        while(cur>0 && arr[cur]<arr[cur-1])
        {
            int temp=arr[cur];
            arr[cur]=arr[cur-1];
            arr[cur-1]=temp;
            cur--;
        }
        cout<<"test"<<endl;
    }
}
void Print_array(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n=6;
    int arr[n]={9,6,1,2,3,5};
    Insertion_sort(arr,n);
    Print_array(arr,n);
    return 0;
}
