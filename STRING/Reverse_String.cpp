#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;;
int main()
{
    string str;
    getline(cin,str);
    //reverse(str.begin(),str.end()); //This will Reverse the string.....
    //cout<<"the reverse is: "<<str<<endl;
    cout<<str.substr(3,6)<<endl;
    //In the syntax the first number tells us from where to start
    //Second number tells us how many character should print.....
    return 0;
}