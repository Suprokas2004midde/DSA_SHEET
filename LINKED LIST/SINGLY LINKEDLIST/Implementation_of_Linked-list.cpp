#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data,Node* next){
        this->data=data;
        this->next=next;
    }
};
int main()
{ 
    //method 1 
    Node s1(10,nullptr);

    //method 2
    Node* s2= new Node(20,nullptr);

    cout<<s1.data<<" "<<s1.next<<endl;
    cout<<s2->data<<" "<<s2->next<<endl; //pointer to an object method can only be access through "->" arrow operator....0
    return 0;
}