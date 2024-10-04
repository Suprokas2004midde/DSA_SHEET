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

Node* segregateoddeven(Node* head)
{
    // taking a vector to store the data of LL... 
    vector<int>arr;
    Node* odd=head;
    Node* even=head->next;

    while(odd!= nullptr && odd->next!=nullptr) // Checks if the odd->next exists or not... 
    {
        arr.push_back(odd->data);
        odd=odd->next->next;
    }
    if(odd) arr.push_back(odd->data); // because of odd->next!=nullptr condition the data of last node will never added to the vector....(SO MANUALLY DOING IT)
    while(even!=nullptr && even->next!=nullptr)
    {
        arr.push_back(even->data);
        even=even->next->next;
    }
    if(even) arr.push_back(even->data);
    int i=0;
    Node* temp=head;
    while(temp!=nullptr)
    {
        temp->data=arr[i];
        i++;
        temp=temp->next;
    }
    return head;
}
int main()
{ 
    vector<int>arr={1,2,3,4,5};
    //Insert in LL....
    Node* head= new Node(arr[0]);
    head=insertinLL(head,arr);
    displayLL(head);
    head=segregateoddeven(head);
    displayLL(head);
    return 0;
}