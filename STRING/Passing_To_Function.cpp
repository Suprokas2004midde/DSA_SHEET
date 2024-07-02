#include<iostream>
#include<string.h>
using namespace std;
void passbyvalue(string str)
{
    str="New hellow world";
    cout<<str<<endl;
}
void passbyreference(string & str)
{
    str+="New Hellow world"; // here +poerator is used to concatinate two strings...
    cout<<str<<endl;
}
void passbypointer(string* str)
{
    *str+="Another hellow world";
    cout<<str<<endl;
    cout<<*str<<endl;
}
int main()
{
    string str="Hellow world";
    cout<<str<<endl;
    cout<<&str<<endl;

    passbyvalue(str);
    cout<<str<<endl;

    passbyreference(str);
    cout<<str<<endl;

    passbypointer(&str);
    cout<<str<<endl;
    return 0;
}