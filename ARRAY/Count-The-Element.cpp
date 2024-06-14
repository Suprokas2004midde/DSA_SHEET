#include<iostream>
using namespace std;
int input(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    return arr[size];
}
int main()
{
    int arr[10],n,count=0;
    input(arr,10);
    cout<<"Enter the number:"<<endl;
    cin>>n;
    for(int i=0;i<10;i++)
    {
        if(arr[i]>n) count++;
    }
    cout<<"There are "<<count<<" Numbers higher than "<<n<<endl;
    return 0;;
}