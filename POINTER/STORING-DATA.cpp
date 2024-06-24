#include<iostream>
using namespace std;
int main()
{
    int x=5;int y=10;
    int *ptr=&x;
    //*ptr=&y;     # This line will throw an error because the *ptr points to the x which is a integer type variable,can only store values not address..... 
    ptr=&y; // this will update the address form x to y....
    cout<<"the value is:"<<*ptr<<endl;
    return 0;
}