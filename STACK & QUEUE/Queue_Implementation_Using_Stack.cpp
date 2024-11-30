#include<iostream>
#include<stack>
using namespace  std;
class Queue{
    stack<int>s1;
    stack<int>s2;

    public:
    void Push(int x)
    {
        if(s1.size()==0) s1.push(x);
        else
        {
            int length=s1.size();
            for(int i=0;i<length;i++)
            {
                s2.push(s1.top());
                s1.pop();
            }
            s1.push(x);
            while(s2.size()>0)
            {
                s1.push(s2.top());
                s2.pop();
            }
        }
    }
    int Pop()
    {
        if(s1.size()==0) cout<<"The Queue is Emptyy...";
        int x=s1.top();
        s1.pop();
        return x;
    }
    int Peek()
    {
        int x=s1.top();
        return x;
    }
    int Size()
    {
        return s1.size();
    }

    bool IsEmpty()
    {
        return s1.size();
    }
};
int main()
{
    Queue queue1;
    queue1.Push(5);
    queue1.Push(6);
    queue1.Push(7);
    cout<<"The Top/front element is: "<<queue1.Peek()<<endl;
    cout<<"The Size of the Queue is: "<<queue1.Size()<<endl;
    cout<<"Deleted element is: "<<queue1.Pop()<<endl;
    cout<<"The Top/front element is: "<<queue1.Peek()<<endl;
    cout<<"The Size of the Queue is: "<<queue1.Size()<<endl;
    cout<<"Is  the Queue empty:: "<<queue1.IsEmpty()<<endl;
    cout<<"Deleted element is: "<<queue1.Pop()<<endl;
    cout<<"Deleted element is: "<<queue1.Pop()<<endl;
    cout<<"Is  the Queue empty:: "<<queue1.IsEmpty()<<endl;
    cout<<queue1.Pop()<<endl;
    return 0;
}