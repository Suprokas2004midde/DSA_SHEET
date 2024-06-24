#include<iostream>
using namespace std;
int addition(int a,int b)
{
    int result =a+b;
    return result;
}
void fun(string str)
{
    cout<<"How are you "<<str<<endl;
}
int main()
{
    fun("suprokas");
    int x=addition(9,12);
    cout<<x<<endl;
    return 0;
}