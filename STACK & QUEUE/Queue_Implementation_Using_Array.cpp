#include<iostream>
using namespace std;
class Queue
{
    int end;
    int start;
    int* Q;
    int size;
    public:
    int length;

    // Constructor......
    Queue(int length)
    {
        Q=new int[length];
        end=start=-1;
        size=0;
        this->length=length;
    }

    //Functions
    void Push(int x)
    {
        if(size<length)
        {
            if(end==-1 && start==-1) //Both are in index -1.....
            {
                start+=1;
                end+=1;
                size++;
                Q[end]=x;
            }

            else
            {
                end=(end+1)%length;
                size++;
                Q[end]=x;
            }
        }
        else cout<<"Length Exceeded"<<endl;
    }

    void Pop()
    {
        if(size>=1)
        {
            start=(start+1)%length;
            size--;
        }
        else cout<<"Queue is empty"<<endl;
    }

    int Top()
    {
        if(size<1) return false;
        else return Q[start];
    }

    int Size()
    {
        return size;
    }

    ~Queue()
    {
        delete[] Q;
        cout<<"Deleted The Queue"<<endl;
    }

};
int main()
{
    Queue que(4);
    que.Push(20);
    que.Push(3);
    cout<<que.Top()<<endl;
    cout<<que.Size()<<endl;
    que.Push(4);
    que.Push(5);
    cout<<que.Size()<<endl;
    que.Push(6);
    cout<<que.Size()<<endl;
    return 0;
}