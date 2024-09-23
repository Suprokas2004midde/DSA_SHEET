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

Node* DeleteElement(Node* head,int k)
{
    Node* temp=head;
    while(temp->data!=k)
    {
        temp=temp->next;
    }
    Node* prev=temp->back;
    Node* after=temp->next;
    if(prev==nullptr && after==nullptr)
    {
        delete head;
        return head;
    }
    else if(prev==nullptr && after!=nullptr)
    {
        Node* mover=head;
        head=head->next;
        head->back=nullptr;
        mover->next=nullptr;
        delete mover;
        return head;
    }
    else if(prev!=nullptr && after==nullptr)
    {
        prev->next=nullptr;
        temp->back=nullptr;
        delete temp;
        return head;
    }
    else
    {
        prev->next=after;
        after->back=prev;
        temp->back=nullptr;
        temp->next=nullptr;
        delete temp;
        return head;
    }
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
    // cout<<endl<<"Reverse printing...."<<endl;
    // while(temp!=nullptr)
    // {
    //     cout<<temp->data<<" ";
    //     temp=temp->back;
    // }
     cout<<endl;
}
int main()
{ 
    vector<int>arr={1,2,3,4,5,6};
    Node* head=new Node(arr[0]);
    head=insertLL(head,arr);
    printDLL(head);
    head=DeleteElement(head,4);
    printDLL(head);
    head=DeleteElement(head,6);
    printDLL(head);
    return 0;
}