#include<iostream>
using namespace std;
class Node
{
    private:
    int data;
    Node* next;
    public:
    Node(int data)
    {
        this->data=data;
        this->next=nullptr;
    }
    friend class Queue;
};

class Queue:public Node{
    Node* start;
    Node* end;
    int size;

    public:
    Queue():Node(data)
    {
        start=nullptr;
        end=nullptr;
        size=0;
    }

    void Queuepush(int data){
        if(start==nullptr &&  end==nullptr)
        {
            Node* temp=new Node(data);
            size++;
            start=temp;
            end=temp;
        }
        else 
        {
            Node* temp=new Node(data);
            end->next=temp;
            end=temp;
            size++;
        }
    }

    int Queuepop()
    {
        if(start==nullptr) return  -1;
        else 
        {
            int startdata=start->data;
            Node* temp=start;
            start=start->next;
            delete temp;
            size--;
            return startdata;
        }
    }

    int Size()
    {
        return size;
    }

    int Top()
    {
        return start->data;
    }
};
// Queue works with FIFO mechanism.....
int main()
{
    Queue qu;
    qu.Queuepush(5);
    qu.Queuepush(6);
    qu.Queuepush(7);
    qu.Queuepush(8);
    cout<<qu.Size()<<endl;
    cout<<qu.Top()<<endl;
    cout<<"Deleted element is: "<<qu.Queuepop()<<endl;
    cout<<qu.Size()<<endl;
    cout<<qu.Queuepop()<<endl;
    return 0;
}