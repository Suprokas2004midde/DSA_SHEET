// here we pass an address of node....(to be deleted)...**THIS WILL NOT DELETE THE LAST NODE...
#include<iostream>
#include<vector>
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
    return head;
}

void printDLL(Node* head)
{
    cout<<"Forward printing...."<<endl;
    Node* temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        if(temp->next==nullptr) break;
        temp=temp->next;
    }
    cout<<endl;
}

void deletenode(Node* temp)
{
    Node* prev=temp->back;
    Node* after=temp->next;
    //Delete only if passed node is in front....
    if(temp->back==nullptr)
    {
        prev->next=nullptr;
        temp->back=nullptr;
        delete temp;
        return;
    }
    else if(temp->next==nullptr)
    {
        prev->next=nullptr;
        temp->back=nullptr;
        delete temp;
        return;
    }
    prev->next=after;
    after->back=prev;
    temp->back=temp->next=nullptr;
    delete temp;
    
}

int main()
{ 
    vector<int>arr={1,2,3,4,5};
    Node* head=new Node(arr[0]);
    head=insertLL(head,arr);
    printDLL(head);
    deletenode(head->next->next->next->next);
    printDLL(head);
    return 0;
}