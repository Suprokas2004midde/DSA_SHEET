#include<iostream>
#include<string>
#include<stack>
using namespace std;
string PrefixToInfix(string str)
{
    int i=0;
    stack<string>st;
    for( i;i<str.size();i++)
    {
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z') || (str[i]>='0' && str[i]<='9')) st.push(string(1, str[i]));

        else
        {
            string t1=st.top();
            st.pop();
            string t2=st.top();
            st.pop();
            string ans;
            ans+= str[i] + t2 + t1;
            st.push(ans);
        }
    }
    return st.top();
}
int main()
{ 
    cout<<"Enter a proper Postfix Expression: "<<endl;
    string str;
    getline(cin,str);
    string ans=PrefixToInfix(str);
    cout<<"Final Infix Expression is:: "<<ans<<endl;
    return 0;
}