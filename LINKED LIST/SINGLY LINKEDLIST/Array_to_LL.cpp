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
int lengthofLL(Node* head){
    int count=0;
    Node* display = head; // Start with the head of the list
    while (display != nullptr) { // Continue until we reach the end of the list
        display = display->next; // Move to the next node
        count++;
    }
    return count;
}
int main()
{ 
    vector<int>arr={20,4,3,6,5,10,9};
    //Insert in LL....
    Node* head= new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp= new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    //traverse the LL...
    int count=0;
    Node* display = head; // Start with the head of the list
    while (display != nullptr) { // Continue until we reach the end of the list
        cout << display->data << " "; // Print the current node's data
        display = display->next; // Move to the next node
        count++;
    }
    cout << endl;
    cout<<"The length of the array is: "<<lengthofLL(head)<<endl;
    return 0;
}