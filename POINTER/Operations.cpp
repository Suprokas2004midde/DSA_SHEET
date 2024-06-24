#include<iostream>
using namespace std;
int main()
{
    int x=10;
    double y=50544;
    int *ptr=&x;
    cout<<" the address of x is: "<<&x<<endl;
    cout<<" the address stored in ptr: "<<ptr<<endl;
    cout<<" the outpput of the operations is: "<<(ptr-1)<<endl; // this will points to the next address after right after ptr points now...
    cout<<ptr--
    <<endl;
    cout<<sizeof(y)<<endl;
    return 0;
}