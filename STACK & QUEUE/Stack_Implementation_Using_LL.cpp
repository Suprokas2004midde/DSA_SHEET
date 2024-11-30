// Inheritence   Methhod.....
#include<iostream>
using namespace std;
class Node //Parents Class 
{
    private:
    int data;
    Node* next;
    
    public:
    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
    friend class Stack; // Allow Stack class to access private members of Node class...
};
class Stack:public Node{ //Child Class....
    Node* top;
    int size;
    public:
    Stack():Node(data)
    {
        top=nullptr;
        size=0;
    }

    void Stackpush(int data)
    {
        Node* temp=new Node(data);
        temp->next=top;
        top=temp;
        size++;
    }

    int Stackpop()
    {
        if(top==nullptr) return -1;

        int topdata=top->data;
        Node* temp=top;
        top=top->next;
        delete temp;
        size--;
        return topdata;
    }

    int Stacktop()
    {
        int topdata=top->data;
        return topdata;
    }

    int Stacksize()
    {
        return size;
    }

    bool IsStackempty()
    {
        return top==nullptr;
    }

    ~Stack() {
        while (top != nullptr) {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
        cout<<"Deleted all node before the  end  of code"<<endl;
    }
};

int main()
{
    Stack st;
    st.Stackpush(5);
    cout<<"Top value of stack is:: "<<st.Stacktop()<<endl;
    cout<<"The Size of the Stack is:: "<<st.Stacksize()<<endl;

    st.Stackpush(6);
    st.Stackpush(7);
    st.Stackpush(8);
    st.Stackpush(9);;
    cout<<"Top value of stack is:: "<<st.Stacktop()<<endl;
    cout<<"The Size of the Stack is:: "<<st.Stacksize()<<endl;
    cout<<"Deleted the data of stack: "<<st.Stackpop()<<endl;
    cout<<"Top value of stack is:: "<<st.Stacktop()<<endl;
    return 0;
}

/*
#include <iostream>
using namespace std;

class Stack {
private:
    // Internal Node class definition
    class Node {
    public:
        int data;
        Node* next;
        
        Node(int data) : data(data), next(nullptr) {}
    };
    
    Node* top;  // Pointer to the top of the stack
    int size;   // Tracks the number of elements in the stack

public:
    // Constructor
    Stack() : top(nullptr), size(0) {}

    // Destructor to delete all nodes when the stack is destroyed
    ~Stack() {
        while (top != nullptr) {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }

    // Push a new element onto the stack
    void push(int data) {
        Node* newNode = new Node(data);
        newNode->next = top;
        top = newNode;
        size++;
    }

    // Pop the top element from the stack and return its data
    int pop() {
        if (isEmpty()) {
            cout << "Stack is empty, cannot pop." << endl;
            return -1; // Indicates the stack is empty
        }
        int poppedData = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        size--;
        return poppedData;
    }

    // Return the top element of the stack without popping it
    int peek() const {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return top->data;
    }

    // Return the number of elements in the stack
    int getSize() const {
        return size;
    }

    // Check if the stack is empty
    bool isEmpty() const {
        return top == nullptr;
    }
};

int main() {
    Stack st;
    st.push(5);
    cout << "Top value of stack is: " << st.peek() << endl;
    cout << "The Size of the Stack is: " << st.getSize() << endl;

    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);
    cout << "Top value of stack is: " << st.peek() << endl;
    cout << "The Size of the Stack is: " << st.getSize() << endl;

    cout << "Popped value from stack: " << st.pop() << endl;
    cout << "Top value of stack is: " << st.peek() << endl;

    return 0;
}
*/