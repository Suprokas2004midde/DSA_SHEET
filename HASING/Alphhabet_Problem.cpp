#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int hash[27]={0};
    for(int i=0;i<str.size();i++)
    {
        hash[str[i]-'a']+=1;
    }
    int quary;
    cout<<" Number of Query.."<<endl;
    cin>>quary;
    while(quary>0)
    {
        char n;
        cout<<"Enter thhe character..."<<endl;
        cin>>n;
        cout<<hash[n-'a']<<endl;
        quary--;
    }
    return 0;
}