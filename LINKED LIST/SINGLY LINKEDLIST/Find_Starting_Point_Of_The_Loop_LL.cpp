#include<iostream>
#include<vector>
#include<stack>
#include<map>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;

    Node(int data,Node* next,Node* back){
        this->back=back;
        this->data=data;
        this->next=next;
    }

    Node(int data)
    {
        this->data=data;
        this->next=nullptr;
        this->back=nullptr;
    }
};

Node* insertLL(Node* head,vector<int>&arr)
{
    Node* mover=head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp=new Node(arr[i],nullptr,mover);
        mover->next=temp;
        mover=temp;
    }
    mover->next=head->next->next->next->next;
    return head;
}

Node* detectloop(Node* head)
{
    map<Node*,int>mpp;
    Node* temp=head;
    while(temp!=nullptr)
    {
        if(mpp.find(temp)!=mpp.end())
        {
            return temp;
        }
        mpp[temp]=1;
        temp=temp->next;
    }
    //cout<<"Loop in the Linkedlist is not present"<<endl;
    return nullptr;
}

int main()
{ 
    //This will end-up taking time complexity....and O(n*logn) Space complexity....O(n)
    //But we have to Optimised it...
    vector<int>arr={1,2,3,4,5,6,7,8,3,10};
    Node* head=new Node(arr[0]);
    head=insertLL(head,arr);
    Node* indexnode=detectloop(head);
    if(indexnode!=nullptr)
    cout<<"The Node Where the Loop Starts is:- "<<indexnode->data<<endl;
    else 
    cout<<"The Node does not have any loop"<<endl;
    return 0;
}