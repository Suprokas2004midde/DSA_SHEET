#include<iostream>
#include<queue>
#include<vector>
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
vector<int> rightviewBinaryTree(Node* root)
{
    vector<int>ans;
    if(root==NULL) return ans;

    queue<Node*>q;
    q.push(root);
    while (!q.empty())
    {
        int CurrentLevelSize=q.size();
        
        while(CurrentLevelSize)
        {
            Node* currentnode=q.front();
            q.pop();

            if (CurrentLevelSize==1)
            {
                ans.push_back(currentnode->value);
            }
            if(currentnode->left) q.push(currentnode->left);
            if(currentnode->right) q.push(currentnode->right);
            CurrentLevelSize--;
        }
    }
    return ans;
}
int main()
{
    Node* root=new Node(2);
    root->left=new Node(4);
    root->right=new Node(10);
    root->left->left=new Node(5);
    root->left->right=new Node(6);
    root->left->left->right=new Node(12);
    root->right->right=new Node(11);
    vector<int>ans=rightviewBinaryTree(root);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}