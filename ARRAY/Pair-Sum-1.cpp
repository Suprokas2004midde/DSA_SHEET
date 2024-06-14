#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n,count=0;
    cout<<"Enter a number:"<<endl;;
    cin>>n;
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(arr[i]+arr[j]==n)
            {
                cout<<"("<<arr[i]<<","<<arr[j]<<")"<<" ";
                count++;
            }
           
        }
    }
    cout<<"\nThe Pair is: "<<count<<endl;
    return 0;
}