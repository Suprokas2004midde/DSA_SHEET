#include<iostream>
using namespace std;
int sum(int a)
{
    int total;
    if(a==0) return 0;
    total=a+sum(a-1);
    return total;
}
int main()
{
    int n;
    cout<<"Enter the number: \n";
    cin>>n;
    int total=sum(n);
    cout<<"The Sum is: "<<total<<endl;
    return 0;
}