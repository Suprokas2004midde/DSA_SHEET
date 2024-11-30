#include<iostream>
using namespace std;
class Stack
{
    int* arr;
    int top;
    public:
    int size;
    Stack()
    {
        top=-1;
        size=1000;
        arr=new int[size]; // Dynamically allocates an entire memory for array...
        cout<<"The Size of the array is: 1000"<<endl;
    }
    Stack(int size)
    {
        top=-1;
        this->size=size;
        arr=new int[size];
        cout<<"The Size of the array is:"<<size<<endl;
    }
    void push(int x)
    {
        top=top+1;
        arr[top]=x;
    }
    int pop()
    {
        int x=arr[top];
        top=top-1;
        return x;
    }
    int Size()
    {
        return top+1;
    }
    int Top()
    {
        return arr[top];
    }
    ~Stack()
    {
        delete[] arr;
        cout<<"deleted all the memories"<<endl;
    }
};
int main()
{
    Stack st(10);
    st.push(10);
    st.push(11);
    st.push(12);
    st.push(12);
    st.push(12);
    st.push(12);
    st.push(12);
    st.push(12);
    st.push(20);
    st.push(50);
    cout<<st.Top()<<endl;
    cout<<st.Size()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    cout<<"comes to an end"<<endl;;
}