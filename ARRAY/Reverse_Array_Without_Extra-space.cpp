#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int a=0,b=9;
    for(int i=0;i<10;i++)
    {
        if(a<b)
        {
            int temp;
            temp=arr[a];
            arr[a]=arr[b];
            arr[b]=temp;
        }
        a++,b--;
    }
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}