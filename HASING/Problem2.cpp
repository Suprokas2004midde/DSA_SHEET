#include<iostream>
using namespace std;
int main()
{
    //arr[8]={2,6,2,8,4,3,9,7}; tell me what is the 
    cout<<"Enter the size of array(Max number <= 100)"<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //Prerequisites...
    int hash[100000]={0};
    //Hasing.....
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]+=1;
    }
    cout<<"Enter the number of query"<<endl;
    int q;
    cin>>q;
    while(q>0)
    {
        int a;
        cout<<"Enter the Number:"<<endl;
        cin>>a;
        cout<<hash[a]<<" ";
        q--;
        cout<<endl;
    }
    return 0;
}