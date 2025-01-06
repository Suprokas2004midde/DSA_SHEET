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
        left=NULL;
        right=NULL;
    }
};
void InorderTraversal(Node* root)
{
    if(root==NULL) return;

    //traverse to the left subtree....
    InorderTraversal(root->left);
    //print the root value...
    cout<<root->value<<" ";
    //Traverse to the right subtree...
    InorderTraversal(root->right);
}
int main()
{
    Node* RootNode=new Node(2);
    RootNode->left=new Node(4);
    RootNode->right=new Node(10);
    RootNode->left->left=new Node(6);
    RootNode->left->right=new Node(5);
    RootNode->right->right=new Node(11);

    InorderTraversal(RootNode);
    return 0;
}