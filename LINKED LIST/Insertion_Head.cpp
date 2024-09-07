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

Node* Inserthead(Node* head,int k){
    Node* temp=new Node(k);
    temp->next=head;
    return temp;
}
int main()
{ 
    vector<int>arr={9,8,7,6,2,5,4};
    Node* head=InsetLL(arr);
    printLL(head);
    head=Inserthead(head,11);
    printLL(head);
    return 0;
}