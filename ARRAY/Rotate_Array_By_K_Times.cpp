#include<iostream>
using namespace std;
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int k;
    cout<<"Enter the Number: "<<endl;
    cin>>k;
    int temp;
    for(int i=1;i<=k;i++)
    {
        temp=arr[0];
        for(int j=0;j<6-1;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[5]=temp;
    }
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}