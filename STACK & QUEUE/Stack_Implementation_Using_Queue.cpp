#include<iostream>
#include<queue>
using namespace std;
class Stack{
    queue<int>st;

    public:
    void Push(int x)
    {
        int s=st.size();
        st.push(x);
        for(int i=1;i<=s;i++)
        {
            st.push(st.front());
            st.pop();
        }
    }

    int Pop()
    {
        int x=st.front();
        st.pop();
        return x;
    }

    int Top()
    {
        int x=st.front();
        return x;
    }

    int Size()
    {
        return st.size();
    }
};
int main()
{
    Stack st;
    st.Push(3);
    cout<<st.Top()<<endl;
    st.Push(4);
    cout<<st.Top()<<endl;
    st.Push(2);
    cout<<"The Start element is:- "<<st.Top()<<endl;
    cout<<"Remove the element:- "<<st.Pop()<<endl;
    cout<<"Size is:- "<<st.Size()<<endl;
    
    return 0;
}