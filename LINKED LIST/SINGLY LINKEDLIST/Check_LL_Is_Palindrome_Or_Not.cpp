#include<iostream>
#include<vector>
#include<stack>
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
}

bool checkpalindrome(Node* head)
{
    //Initialising a stack....
    stack<int>st;
    Node* temp=head;
    //Push all values of LL to stack....
    while(temp!=nullptr)
    {
        st.push(temp->data);
        temp=temp->next;
    }
    // Reassigning the temp pointer.....
    temp=head;
    // Continue Till it reaches to the last Node
    while(temp!=nullptr)
    {
        ///Comparing the value of LL and Stack top....
        if(temp->data!=st.top())
        {
            return false;
        }
        //Delete the top element....
        st.pop();
        temp=temp->next;
    }
    //Returns true if the false condition is not occured....
    return true;
}
int main()
{ 
    vector<int>arr={1,2,3,2,1};
    //Insert in LL....
    Node* head= new Node(arr[0]);
    head=insertinLL(head,arr);
    if(checkpalindrome(head))
    {
        cout<<"The LinkedList is Palindrome..."<<endl;
    }
    else 
    cout<<"The LinkedList Is Not Palindrome..."<<endl;
    return 0;
}