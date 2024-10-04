#include<iostream>
#include<vector>
#include<stack>
#include<map>
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
    mover->next=head->next->next->next->next;
    return head;
}

bool detectloop(Node* head)
{
    map<Node*,int>mpp;
    Node* temp=head;
    while(temp!=nullptr)
    {
        if(mpp.find(temp)!=mpp.end())
        {
            return true;
        }
        mpp[temp]=1;
        temp=temp->next;
    }
    cout<<"Loop in the Linkedlist is not present"<<endl;
    return false;
}

int main()
{ 
    //This will end-up taking O(n*n) time complexity....and O(n) Space complexity....
    //But we have to Optimised it...
    vector<int>arr={1,2,3,4,5,6,7,8,3,10};
    Node* head=new Node(arr[0]);
    head=insertLL(head,arr);
    if(detectloop(head))
    {
        cout<<"Loop in a linkedlist is present...."<<endl;
    }
    return 0;
}