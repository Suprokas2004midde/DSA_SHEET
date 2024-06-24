#include<iostream>
using namespace std;
void findoccerence(string str,char ch,int *fi,int *li)
{
    for(int i=0;i<str.size();i++)
    {
        if(str[i]==ch){
        *fi=i;
        break;
        }
    }
    for(int i=str.size()-1;i>=0;i--)
    {
        if(str[i]==ch)
        {
            *li=i;
            break;
        }
    }
    return;
}
int main()
{
    string s="hellow";
    char ch= 'l';
    int first=-1;
    int last=-1;
    findoccerence(s,ch,&first,&last);
    cout<<first<<" "<<last<<endl;
    return 0;
}