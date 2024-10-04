#include<iostream>
#include<vector>
#include<stack>
#include<list>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};

Node* insertinLL(Node* head,vector<int>arr)
{
    Node* mover=head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp= new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void displayLL(Node* head)
{
    Node* display = head; 
    while (display != nullptr) { 
        cout << display->data << " "; 
        display = display->next; 
    }
    cout<<endl;
}

Node* sortLL(Node* head)
{
    Node* temp=head;
    Node* done=new Node (-1);
    Node* one=done;
    Node* dtwo=new Node (-1);
    Node* two=dtwo;
    Node* dzero=new Node (-1);
    Node* zero=dzero;

    while(temp!=nullptr)
    {
        if(temp->data==1)
        {
            one->next=temp;
            one=one->next;
        }
        else if(temp->data==0)
        {
            zero->next=temp;
            zero=zero->next;
        }
        else
        {
            two->next=temp;
            two=two->next;
        }
        temp=temp->next;
    }

    zero->next=done->next?done->next:dtwo->next; // if there is no element of value one points to the dtwo->next...
    one->next=dtwo->next; //1's -> 2's
    return dzero->next; // returning  
}

int main()
{ 
    vector<int>arr={0,0,2,2,0,2,2};
    //Insert in LL....
    Node* head= new Node(arr[0]);
    head=insertinLL(head,arr);
    displayLL(head);
    head=sortLL(head);
    displayLL(head);
    return 0;
}