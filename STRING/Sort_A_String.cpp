#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
void Countsort(string& str)
{
    vector<int>temp(26,0); //This initialises the array as size of 26 and each value wilkl be 0.....

    for(int i=0;i<str.length();i++)
    {
        int index=str[i]-'a';
        temp[index]+=1;
    }
    int m=0;
    for(int i=0;i<26;i++)
    {
        while(temp[i]>0)
        {
            str[m]=i+'a';
            m++; 
            temp[i]-=1;
        }
    }
    return ;
}
int main()
{
    string str;
    getline(cin,str);
    Countsort(str);
    cout<<str<<endl;
    return 0;
}