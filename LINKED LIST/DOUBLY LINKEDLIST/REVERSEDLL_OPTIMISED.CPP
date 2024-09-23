#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* back;
    Node* next;

    Node (int data)
    {
        this->data=data;
        this->back=nullptr;
        this->next=nullptr;
    }
    Node (int data,Node* next,Node*back)
    {
        this->back=back;
        this->next=next;
        this->data=data;
    }
};

Node* insertdll(Node* head,vector<int>arr)
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

Node* reversedll(Node* head)
{
    
    if(head==nullptr||head->next==nullptr)
    {
        return head;
    }
    Node* current=head;
    Node* prev=nullptr;
    while(current!=nullptr)
    {
        prev=current->back;
        current->back=current->next;
        current->next=prev;
        current=current->back;
    }
    return prev->back;
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

int main()
{ 
    vector<int>arr={1,2,3,4,5,6,7,8,9,10,11,12};
    Node* head=new Node(arr[0]);
    head=insertdll(head,arr);
    printDLL(head);
    head=reversedll(head);
    printDLL(head);
    return 0;
}