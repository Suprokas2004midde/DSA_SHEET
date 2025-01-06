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
int MaxdepthofBinaryTree(Node* rootNode)
{
    //base case....
    if(rootNode==NULL) return 0;

    int leftMaxDepth=MaxdepthofBinaryTree(rootNode->left);
    int rightMaxDepth=MaxdepthofBinaryTree(rootNode->right);
    return (max(leftMaxDepth,rightMaxDepth)+1);
}
int main()
{
    Node* root=new Node(2);
    root->left=new Node(4);
    root->right=new Node(10);
    root->left->left=new Node(5);
    root->left->right=new Node(6);
    root->right->right=new Node(11);
    root->right->right->right=new Node(12);

    int depth=MaxdepthofBinaryTree(root);
    cout<<depth<<endl;
    return 0;
}