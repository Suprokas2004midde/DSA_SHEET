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
Node* Insertheadbefore(Node* head,int val)
{
    Node* newnode=new Node(val,head,nullptr);
    head->back=newnode;
    return newnode;
}
Node* Insertheadafter(Node* head,int val)
{
    Node* newnode=new Node(val);
    newnode->back=head;
    newnode->next=head->next;
    head->next->back=newnode;
    head->next=newnode;
    return head;
}
int main()
{ 
    vector<int>arr={1,2,3,4,5,6};
    Node* head=new Node(arr[0]);
    head=insertLL(head,arr);
    printDLL(head);
    //head=Insertheadbefore(head,20);
    //printDLL(head);
    head=Insertheadafter(head,50);
    printDLL(head);
    return 0;
}