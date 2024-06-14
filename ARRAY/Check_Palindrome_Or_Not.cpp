#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,5,5,4,3,2,1};
    int a=0,b=9,check=0;
    for(int i=0;i<10;i++)
    {
        if(a<=b) if(arr[a]!=arr[b]) check++;
        a++,b--;
    }
    if(check==0) cout<<"This is palindrome"<<endl;
    else cout<<"this is not a Palindrome"<<endl;
    return 0;
}