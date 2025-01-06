#include<iostream>
#include<queue>
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

void LevelOrderTraversaal(Node* rootNode)
{
    if(rootNode==NULL) return;
    //create a queue to store the nodes...
    queue<Node*>q;
    q.push(rootNode);
    while(!q.empty())
    {
        Node* currentnode=q.front();
        q.pop();
        cout<<currentnode->value<<" ";
        if(currentnode->left)
        {
            q.push(currentnode->left);
        }
        if(currentnode->right)
        {
            q.push(currentnode->right);
        }
    }
}
int main()
{
    Node* root=new Node(2);
    root->left=new Node(4);
    root->right=new Node(10);
    root->left->left=new Node(5);
    root->left->right=new Node(6);
    root->right->right=new Node(11);
    
    LevelOrderTraversaal(root);
}