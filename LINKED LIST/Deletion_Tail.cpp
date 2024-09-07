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

//Changing the tail....
Node* Removetail(Node* head){
    Node* temp=head;
    if(temp==nullptr || temp->next==nullptr){
        return head;
    }
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    //free(temp->next); It's mainly used in c language...
    delete temp->next;
    temp->next=nullptr;
    return head;
}
int main()
{ 
    vector<int>arr={9,8,7,6,2,5,4};
    Node* head=InsetLL(arr);
    printLL(head);
    head=Removetail(head);
    printLL(head);
    return 0;
}