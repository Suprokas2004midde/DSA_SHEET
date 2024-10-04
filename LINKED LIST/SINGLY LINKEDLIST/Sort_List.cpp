#include<iostream>
#include<vector>
#include<set>
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

Node* sortLL(Node* head)
{
    multiset<int>st;
    Node* temp=head;
    while(temp!=nullptr) // O(N logN)...
    {
        st.insert(temp->data);
        temp=temp->next;
    }
    temp=head;
    auto it=st.begin();
    /// can only be traverse throughh iterators...
    while(temp!=nullptr && it!=st.end()) //O(N)
    {
        temp->data=*it;
        it++;
        temp=temp->next;
    }
    return head;
}

int main()
{ 
    vector<int>arr={6,5,4,3,3,1};
    //Insert in LL....
    Node* head= new Node(arr[0]);
    head=insertinLL(head,arr);
    displayLL(head);
    head=sortLL(head);
    displayLL(head);
    return 0;
}