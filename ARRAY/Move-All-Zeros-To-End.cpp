#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void MoveEnd(vector<int>&arr,int n)
{
    int pointer1=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0) 
        {
            pointer1=i;
            break;
        }
    }
    int pointer2=pointer1+1;
    if(pointer1==-1) return;
    //cout<<pointer1<<endl;
    for(int j=pointer2;j<n;j++)
    {
        if(arr[j]!=0)
        {
            int temp;
            temp=arr[j];
            arr[j]=arr[pointer1];
            arr[pointer1]=temp;
            pointer1++;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    vector <int> arr;
    for(int i=0;i<n;i++)
    {
        int value;
        cin>>value;
        arr.push_back(value);
    }
    MoveEnd(arr,n);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}