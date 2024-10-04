#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data,Node* next){
        this->data=data;
        this->next=next;
    }

    Node(int data)
    {
        this->data=data;
        this->next=nullptr;
    }
};

Node* insertLL(Node* head,vector<int>&arr)
{
    Node* mover=head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
Node* middleLL(Node* head)
{
    int count=0;
    Node* temp1=head;
    while(temp1!=nullptr)
    {
        count++;
        temp1=temp1->next;
    }
    int middle =(count/2)+1;
    Node* temp=head;
    while(temp!=nullptr)
    {
        middle--;
        if(middle==0)
        break;
        temp=temp->next;
    }
    return temp;
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
    vector<int>arr={1,2,3,4,5,10,55,023,22};
    Node* head=new Node(arr[0]);
    head=insertLL(head,arr);
    printDLL(head);
    head=middleLL(head);
    printDLL(head);
    return 0;
}