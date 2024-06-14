#include<iostream>
using namespace std;
int swap(int*a,int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    swap(&a,&b);
    printf("a=%d\nb=%d",a,b);
    return 0;;
}