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
int LeafNodeCount(Node* rootNode)
{
    //base case....
    if(rootNode==NULL) return 0;
    ///Leafnode
    if(rootNode->left==NULL && rootNode->right==NULL) return 1;

    int leftMaxDepth=LeafNodeCount(rootNode->left);
    int rightMaxDepth=LeafNodeCount(rootNode->right);
    return leftMaxDepth+rightMaxDepth;
}
int main()
{
    Node* root=new Node(2);
    root->left=new Node(4);
    root->right=new Node(10);
    root->left->left=new Node(5);
    root->left->right=new Node(6);
    root->right->right=new Node(11);
    root->right->left=new Node(12);

    int depth=LeafNodeCount(root);
    cout<<depth<<endl;
    return 0;
}