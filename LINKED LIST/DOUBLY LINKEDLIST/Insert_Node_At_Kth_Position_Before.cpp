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
Node* Insertbeforeposition(Node* head,int val,int k)
{
    Node* temp=head;
    int count=0;
    if(k==1)
    {
        Node* newnode=new Node(val,head,nullptr);
        head->back=newnode;
        return newnode;
    }
    while(temp!=nullptr)
    {
        count++;
        if(count==k)
        {
            Node* newnode= new Node(val);
            newnode->back=temp->back;
            newnode->next=temp;
            temp->back->next=newnode;
            temp->back=newnode;
            return head;
        }
        temp=temp->next;
    }
    return head;
}
int main()
{ 
    vector<int>arr={1,2,3,4,5,6};
    Node* head=new Node(arr[0]);
    head=insertLL(head,arr);
    printDLL(head);
    head=Insertbeforeposition(head,102,6);
    printDLL(head);
    head=Insertbeforeposition(head,60,1);
    printDLL(head);
    return 0;
}