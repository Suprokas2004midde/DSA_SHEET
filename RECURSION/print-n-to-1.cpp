#include<iostream>
using namespace std;
void print(int a)
{
    if(a==0) return;
    cout<<a<<endl;
    print(a-1);
    return;
}
int main()
{
    int n;
    cout<<"Enter the Number: \n";
    cin>>n;
    print(n);
    return 0;;
}