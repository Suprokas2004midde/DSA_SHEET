#include<iostream>
#include<stack>
#include<string>
using namespace std;

string reverse(string str)
{
    int i=0;
    int j=str.size()-1;
    while (i<=j)
    {
        char temp;
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    return str; 
}

int priority(char ch)
{
    if(ch=='^') return 3;
    if(ch=='*' || ch=='/') return 2;
    if(ch=='+' || ch=='-') return 1;
    else return -1;
}

string InfixToPrefix(string str)
{
    int i=0;
    int n=str.size();
    stack<char>st;
    string ans;

    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='(') str[i]=')';
        else if(str[i]==')') str[i]='(';
    }
    cout<<"After reverseing the parenthesis:: "<<str<<endl;
    while(i<n)
    {
        //Operand...
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z') || (str[i]>='0' && str[i]<='9')) ans+=str[i];

        //Operator first parenthesis...'('
        else if(str[i]=='(') st.push(str[i]);

        //close parenthesis...')'....
        else if (str[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            st.pop(); // Removes '('
        }

        //Operator.....
        else 
        {
            if(str[i]=='^' && st.top()=='^')
            {
                ans+='^';
            }
            while (!st.empty() && priority(st.top()) > priority(str[i]))
            {
                ans+=st.top();
                st.pop();
            }
            st.push(str[i]);
        } 
        i++;
    }
    //Transferring the existing datas in the stack....
    while(!st.empty())
    {
        ans+=st.top();
        st.pop();
    }
    return ans;
}

int main()
{ 
    cout<<"Enter an Infix Expression: "<<endl;
    string str;
    getline(cin,str);
    cout<<str<<endl;
    str=reverse(str);
    cout<<"Reverse the infix Expression: "<<str<<endl;
    string ans=InfixToPrefix(str);
    ans=reverse(ans);
    cout<<"Prefix Expression:: "<<ans<<endl;
    return 0;
}