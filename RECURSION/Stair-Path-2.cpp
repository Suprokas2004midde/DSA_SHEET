#include<iostream>
using namespace std;
int fibo(int a)
{
    if(a==1 || a==2) return a;
    if(a==3) return 4;
    return fibo(a-1)+fibo(a-2)+fibo(a-3);
}
int main()
{
    int n;
    cout<<"Enter the Number of stairs: \n";
    cin>>n;
    cout<<"The total number no of ways:"<<fibo(n)<<endl;
    return 0;;
}