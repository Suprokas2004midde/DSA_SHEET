#include<iostream>
#include<queue>
#include<stack>
#include<vector>
using namespace std;
class Node{
    public:
    int value;
    Node* right;
    Node* left;

    Node(int val)
    {
        value=val;
        left=right=NULL;
    }
};
stack<Node*> ReverseLevelOrder(Node* RootNode)
{
    stack<Node*>ans;
    if(RootNode==NULL) return ans;
    queue<Node*>q;
    q.push(RootNode);
    while (!q.empty())
    {
        int CurrentLevelSize=q.size();
        while(CurrentLevelSize--)
        {
            Node* currentNode=q.front();
            q.pop();
            ans.push(currentNode);

            //Do right side traversal;
            if(currentNode->right)
            {
                q.push(currentNode->right);
            }

            if(currentNode->left)
            {
                q.push(currentNode->left);
            }

        }
    }
    return ans;
    // vector<int>answer;
    // while (!ans.empty())
    // {
    //     answer.push_back(ans.top()->value);
    // }
    
}
int main()
{
    Node* root=new Node(2);
    root->left=new Node(4);
    root->left->left=new Node(6);
    root->left->right=new Node(5);
    root->right=new Node(10);
    root->right->right=new Node(11);
    root->left->left->right=new Node(12);

    stack<Node*>ans=ReverseLevelOrder(root);

    while (!ans.empty())
    {
        cout<<(ans.top()->value)<<" ";
        ans.pop();
    }
    

    return 0;
}