#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    string str="Hellow World";
    string str1="Hellow";
    char str2[20]="Suprokas miidde";
    // reverse(str.begin(),str.end());
    // cout<<str<<endl;
    // cout<<str1.substr(1,5)<<endl;
    // str1.push_back('e');
    // cout<<str1<<endl;
    cout<<str.size()<<endl;
    cout<<str1.size()<<endl;
    cout<<strlen(str2)<<endl;
    return 0;
}