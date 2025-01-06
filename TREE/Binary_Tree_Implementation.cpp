#include<iostream>
using namespace std;
class Node
{
    public:
    int value;
    Node* left;
    Node* right;

    Node(int val)
    {
        value=val;
        left=right=NULL;
    }
};

void PreOrderTraversal(Node* RootNode)
{
    if(RootNode==NULL) return;
    cout<<RootNode->value<<" ";
    PreOrderTraversal(RootNode->left);
    PreOrderTraversal(RootNode->right);
}
int main()
{
    Node* root= new Node(2);
    root->left= new Node(4);
    root->right=new Node(10);
    root->left->left=new Node(6);
    root->left->right=new Node(5);
    root->right->right=new Node(11);
    

    PreOrderTraversal(root);

    cout<<endl<<"Left leaf is: "<<root->left->value<<endl;
    cout<<"Right leaf is: "<<root->right->value<<endl;

    return 0;
}

//     2
//   4   10
//  6  5    11