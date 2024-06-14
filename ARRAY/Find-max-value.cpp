#include<iostream>
using namespace std;
int input(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    return arr[10];
}
int main()
{
    int arr[10],max,min,indexMin=0,indexMax;
    input(arr,10);
    max=arr[0];
    min=arr[0];
    for(int i=0;i<10;i++)
    {
        if(max<=arr[i])  
        {
            max=arr[i];
            indexMax=i;
        }
        if(min>arr[i])  
        {
            min=arr[i];
            indexMin=i;
        }
    }
    cout<<"The Max Element is: "<<max<<endl;
    cout<<"The Max Index is: "<<indexMax+1<<endl;
    cout<<"The Min Element is: "<<min<<endl;
    cout<<"The Max Index is: "<<indexMin+1<<endl;
    return 0;
}