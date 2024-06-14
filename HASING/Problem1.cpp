#include<iostream>
using namespace std;
int main()
{
    int n=9;
    // cin>>n;
    int arr[n]={2,6,8,7,9,3,2,6,2};  //Print the number of value appeared in array of 2,6,3,8...
    /*
        2->3
        6->2
        3->1
    */
    // for(int i=0;i<n;i++)
    // {
    //     cin>>arr[i];
    // }
    int q;
    cin>>q;
    while(q>0){
    int count=0;
    int type;
    cin>>type;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==type) count++;
    }
    cout<<count<<endl;
    q--;
    }
    
    return 0;
}