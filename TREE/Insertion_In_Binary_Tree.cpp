#include<iostream>
#include<queue>
using namespace std;
class Node
{   
    public:
    int value;
    Node* left;
    Node*right;

    Node(int val)
    {
        value=val;
        left=right=NULL;
    }
};
class BST
{
    public:
    Node* root;
    BST()
    {
        root=NULL;
    }
};

//Insert in bst code....
void InsertionInBST(Node* &root,int val)
{
    //Creating a new node...
    Node* newNode= new Node(val);

    //If it's empty....
    if(root==NULL)
    {
        root=newNode;
        return;
    }

    // If it's not empty.....
    Node* current=root;
    while(true)
    {
        //insertion in left side...
        if(current->value>val)
        {
            if(current->left==NULL) 
            {
                current->left=newNode;
                return;
            }
            current=current->left;
        }
        //Insertion in right side....
        else
        {
            if(current->right==NULL)
            {
                current->right=newNode;
                return;
            }
            current=current->right;
        }
    }
}

//Searching in Bst...
bool SearchInBST(Node* root,int key)
{
    //Base case
    if(root==NULL) return false;

    if(root->value==key) return true;
    //recursive way....
    if(root->value>key)
    {
        return SearchInBST(root->left,key);
    }
    if(root->value<key)
    {
        return SearchInBST(root->right,key);
    }
}
//InOrder traversal code....
void InOrderTraversal(Node* RootNode)
{
    if(RootNode==NULL) return;

    InOrderTraversal(RootNode->left);
    cout<<RootNode->value<<" ";
    InOrderTraversal(RootNode->right);
}

int main()
{
    BST bst1;
    InsertionInBST(bst1.root,3);
    InsertionInBST(bst1.root,1);
    InsertionInBST(bst1.root,4);
    InsertionInBST(bst1.root,2);
    InsertionInBST(bst1.root,6);

    InOrderTraversal(bst1.root);
    cout<<endl;
    cout<<SearchInBST(bst1.root,6);
    return 0;
}