#include<iostream>
using namespace std;
int main()
{
    int x=5;
    double y=6.5;
    int *ptrx=&x;
    double *ptry=&y;
    cout<<"The size of x is: "<<sizeof (x)<<endl;
    cout<<"The size of y is: "<<sizeof(y)<<endl;
    cout<<ptrx<<" "<<(ptrx+1)<<" "<<&x<<endl;
    cout<<ptry<<" "<<(ptry+1)<<" "<<&y<<endl;
    return 0;
}