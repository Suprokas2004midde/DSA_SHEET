//THIS CODE DELETE THE NODE ACCORDING TO THE GIVER POSITION OF NODE OR VALUE.....

#include<iostream>
#include<vector>
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
Node* InsertLL(vector<int>& arr){
    Node* head=new Node (arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node (arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
void PrintLL(Node* head){
    Node* mover=head;
    while(mover!=nullptr){
        cout<<mover->data<<" ";
        mover=mover->next;
    }
    cout<<endl;
}
//REMOVE BASED ON POSITION....
Node* Removenode(Node* head,int k){
    if(head==nullptr) return head;
    if(k==1){
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    int count=0;
    Node* mover=head;
    Node* prev=nullptr;
    while(mover!=nullptr){
        count++;
        if(count==k){
            prev->next=prev->next->next;
            delete mover;
            break;
        }
        prev=mover;
        mover=mover->next;
    }
    return head;
}
//REMOVE BASED ON VALUE
Node* RemoveEL(Node* head,int el){
    if(head==nullptr) return head;
    if(head->data==el){
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    Node* mover=head;
    Node* prev=nullptr;
    while(mover!=nullptr){
        if(mover->data==el){
            prev->next=prev->next->next;
            delete mover;
            break;
        }
        prev=mover;
        mover=mover->next;
    }
    return head;
}
int main()
{ 
    vector<int>arr={1,2,3,4,5,6,7,8,9};
    int k=6;
    Node* head=InsertLL(arr);
    PrintLL(head);
    head=Removenode(head,k);
    PrintLL(head);
    k=9;
    head=RemoveEL(head,k);
    PrintLL(head);
    return 0;
}