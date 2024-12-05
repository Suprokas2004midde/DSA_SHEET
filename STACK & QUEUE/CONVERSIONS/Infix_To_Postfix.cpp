#include<iostream>
#include<string>
#include<stack>
using namespace std;

int priority(char ch)
{
    if(ch=='^') return 3;
    if(ch=='*' || ch=='/') return 2;
    if(ch=='+' || ch=='-') return 1;
    else return -1;
}
string InfixToPostfix(string str)
{
    int i=0;
    int n=str.size();
    stack<char>st;
    string ans;

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
            while (!st.empty() && priority(st.top()) >= priority(str[i]))
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
    string str;
    cout<<"Enter the Infix expression: "<<endl;;
    getline(cin,str); 
    string ans=InfixToPostfix(str);
    cout<<"The Postfix Expression is: "<<ans<<endl;
    return 0;
}

