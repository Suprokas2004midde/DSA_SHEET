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

Node* Delete_Occurence(Node* head,int key)
{
    Node* temp=head;
    while(temp!=nullptr)
    {
        if(temp->data==key)
        {
            if(temp->back==nullptr)
            {
                head=temp->next;
                delete temp;
                if(head!=nullptr)head->back=nullptr;
                temp=head;
            }
            else if(temp->back!=nullptr && temp->next!=nullptr)
            {
                Node* before=temp->back;
                Node* after=temp->next;
                delete temp;
                before->next=after;
                after->back=before;
                temp=after;
            }
            else if(temp->next==nullptr)
            {
                Node* before=temp->back;
                delete temp;
                before->next=nullptr;
                temp=nullptr;
            }
        }
        else temp=temp->next;
    }
    return head;
}
int main()
{
    vector<int>arr={10,4,10,10,6,10};
    int key=10;
    Node* head=new Node(arr[0]);
    head=insertLL(head,arr);
    printDLL(head);
    head=Delete_Occurence(head,key);
    printDLL(head);
    return 0;
}