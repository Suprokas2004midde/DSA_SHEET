#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //Pre-fetching
    map<int,int>mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }




    //Quaries 
    int q;
    cin>>q;
    while(q--)
    {
        int number;
        cin>>number;
        cout<<mpp[number]<<endl;
    }
    cout<<mpp.size()<<endl;
    cout<<mpp.max_size()<<endl;
    // cout<<mpp.find(4)<<endl;
    return 0;
}