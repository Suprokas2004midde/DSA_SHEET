#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n,index;
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    if(str1.size()>str2.size()) n=str1.size();
    else  n=str2.size();
    bool check=true;
    for(int i=0;i<n;i++) 
    {
        if(str1[i]==str2[i]) 
        {
            check=true;
            continue;
        } 
        else
        {
            index=i;
            check=false;
            break;
        }
    }
    if(check==true) 
    cout<<"The Strings aare similar."<<endl;
    else
    cout<<"The strings are Different."<<endl;
    cout<<"The difference between two strings are in index: "<<index<<endl;
    return 0;
}