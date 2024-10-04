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

Node* Deletemiddlenode(Node* head)
{
    int length=0;
    Node* temp=head;
    while(temp!=nullptr) //Time:- O(N)
    {
        length++;
        temp=temp->next;
    }
    int middlenode=length/2;
    length=0;
    temp=head;
    while(temp!=nullptr) //O(n/2)
    {
        length++;
        if(length==middlenode)
        {
            Node* deletenode=temp->next;
            temp->next=temp->next->next;
            delete deletenode;
            return head;
        }
        temp=temp->next;
    }
    return nullptr;
}
int main()
{ 
    vector<int>arr={1,2,3,4,5,6};
    //Insert in LL....
    Node* head= new Node(arr[0]);
    head=insertinLL(head,arr);
    displayLL(head);
    head=Deletemiddlenode(head);
    displayLL(head);
    return 0;
}