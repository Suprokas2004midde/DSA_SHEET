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
Node* Inserttailbefore(Node* head,int val)
{
    Node* newnode= new Node(val);
    Node* temp=head;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    newnode->back=temp->back;
    newnode->next=temp;
    temp->back->next=newnode;
    temp->back=newnode;
    return head;
}
Node* insertailafter(Node* head,int val)
{
    Node* newnode=new Node(val);
    Node* temp=head;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    newnode->back=temp;
    newnode->next=nullptr;
    temp->next=newnode;
    return head;
}
int main()
{ 
    vector<int>arr={10,22,3,4,5,6};
    Node* head=new Node(arr[0]);
    head=insertLL(head,arr);
    printDLL(head);
    head=Inserttailbefore(head,102);
    printDLL(head);
    head=insertailafter(head,60);
    printDLL(head);
    return 0;
}