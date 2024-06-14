#include<iostream>
using namespace std;
int main()
{
    int num=582;
    string str=to_string(num);
    str +='1';
    cout<<str<<endl;
    cout<<str[1]<<endl;
    return 0;
}