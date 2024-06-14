#include<iostream>
using namespace std;
int power(int a,int b)
{
    if(b==0) return 1;
    return a*power(a,b-1);
}
int main()
{
    int a,b,total;
    cout<<"Enter the number:"<<endl;
    cin>>a>>b;
    total=power(a,b);
    cout<<"The power is: "<<total<<endl;
    return 0;
}