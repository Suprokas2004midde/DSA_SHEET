#include<iostream>
using namespace std;
int fibo(int a)
{
    if(a==1 || a==2) return a;
    return fibo(a-1)+fibo(a-2);
}
int main()
{
    int n;
    cout<<"Enter the Number of stairs: \n";
    cin>>n;
    cout<<"The total number no of ways:"<<fibo(n)<<endl;
    return 0;;
}