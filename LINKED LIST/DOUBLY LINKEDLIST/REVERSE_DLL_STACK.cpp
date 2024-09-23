#include<iostream>
#include<vector>
#include<stack>
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
Node* reversedll(Node* head)
{
    stack<int>st;
    Node* temp=head;
    while(temp!=nullptr)
    {
        st.push(temp->data);
        temp=temp->next;
    }
    temp=head;
    while(temp!=nullptr)
    {
        temp->data=st.top();
        st.pop();
        temp=temp->next;
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
int main()
{ 
    //This will end-up taking O(2n) time complexity....and O(n) Space complexity....
    //But we have to trim it down to single traverse.... 
    vector<int>arr={1,2,3,4,5,6};
    Node* head=new Node(arr[0]);
    head=insertLL(head,arr);
    printDLL(head);
    head=reversedll(head);
    printDLL(head);
    return 0;
}