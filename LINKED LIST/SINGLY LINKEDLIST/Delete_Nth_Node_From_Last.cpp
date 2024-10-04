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

Node* deletenode(Node* head, int n)
{
    // Time Complexity Avg: O(2N)...
    // Space Complexity:- O(1)...
    if(head==nullptr || head->next==nullptr) return head;
    int length=0;
    Node* temp=head;
    while(temp!=nullptr) // Worst Case: O(n)
    {
        length++;
        temp=temp->next;
    }
    int node=length-n,length2=0;
    temp=head;
    while(temp!=nullptr) //Worst case:- O(N)
    {
        length2++;
        if(length2==node)
        {
            Node* delnode=temp->next;
            temp->next=temp->next->next;
            delete delnode; 
            return head;
        }
        temp=temp->next;
    }
    return nullptr;
}
int main()
{ 
    vector<int>arr={1,2,3,4,5,6,7,8,9,10};
    //Insert in LL....
    Node* head= new Node(arr[0]);
    head=insertinLL(head,arr);
    displayLL(head);
    head=deletenode(head,5);
    displayLL(head);
    return 0;
}