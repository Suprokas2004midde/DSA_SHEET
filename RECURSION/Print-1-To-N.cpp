#include<iostream>
using namespace std;
void printing(int a,int b)
{
    if(a>b) return;
    printing(a+1,b);
    cout<<a<<" "; //HHere Function call executes first......
}
int main()
{
    int n;
    cin>>n;
    printing(1,n);
    return 0;
}