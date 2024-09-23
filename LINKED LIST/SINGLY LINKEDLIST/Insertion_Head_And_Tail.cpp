#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};

//Inserting array to Linked List....
Node* InsetLL(vector<int>& arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp= new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

//Print Linked list....
void printLL(Node* head){
    Node* mover=head;
    while(mover!=nullptr){
        cout<<mover->data<<" ";
        mover=mover->next;
    }
    cout<<endl;
}

//Insert Head...
Node* Inserthead(Node* head,int k){
    Node* temp=new Node(k);
    temp->next=head;
    return temp;
}

//Insert Tail...
Node* InsertTail(Node* head,int val){
    if(head==nullptr) 
    {
        return new Node(val);
    }
    Node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    Node* newNode=new Node(val);
    temp->next=newNode;
    return head;
}

// Node* InsertPosition(Node* head,int val,int k){
//     //When the LL is empty....
//     if(head==nullptr)
//     {
//         if(k==1) return new Node(val);
//         else return head;
//     }
//     //When the LL is not empty(only 1 value..)
//     if(k==1)
//     {
//         Node* temp=new Node(val);
//         temp->next=head;
//         return temp;
//     }
//     //insert in any position...
//     Node* temp=head;
//     int count=0;
//     while(temp!=nullptr)
//     {
//         count++;
//         if(count=k-1)
//         {
//             Node* newnode=new Node(val);
//             newnode->next=temp->next;
//             temp->next=newnode;
//             break;
//         }
//     }
//     return head;
// }

//insert any position by value....
Node* InsertPosition(Node* head,int val,int Rval){
    //When the LL is empty....
    if(head==nullptr)
    {
        return head;
    }
    //When the LL is not empty(Only 1 element)...
    if(head->data==val)
    {
        Node* temp=new Node(Rval);
        temp->next=head;
        return temp;
    }
    //insert in any position...
    Node* temp=head;
    //Node* prev=nullptr;
    while(temp!=nullptr)
    {
        if(temp->next->data==val)
        {
            Node* newnode=new Node(Rval);
            newnode->next=temp->next;
            temp->next=newnode;
            break;
        }
        temp=temp->next;
    }
    return head;
}
int main()
{ 
    vector<int>arr={9,8,7,6,2,5,4};
    Node* head=InsetLL(arr);
    printLL(head);
    // head=Inserthead(head,11);
    // printLL(head);
    // head=InsertTail(head,100);
    // printLL(head);
    head=InsertPosition(head,4,300);
    printLL(head);
    return 0;
}