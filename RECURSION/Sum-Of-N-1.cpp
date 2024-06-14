#include<iostream>
using namespace std;
void sum(int n,int s)
{
    cout<<s<<endl;
    if(n==0) return;
    sum(n-1,s+n);
    return;
}
int main()
{
    int n,total;
    cout<<"Enter the Number:\n";
    cin>>n;
    sum(n,0);
    return 0;
}