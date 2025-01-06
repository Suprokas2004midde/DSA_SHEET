#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* left;
    Node* right;
    
    Node(int val) {
        value = val;
        left = nullptr;
        right = nullptr;
    }
};

void postOrderTraversal(Node* rootnode) {
    if (rootnode == nullptr) {
        return;
    }
    
    // Traverse the left subtree
    postOrderTraversal(rootnode->left);
    
    // Traverse the right subtree
    postOrderTraversal(rootnode->right);
    
    // Visit the node
    cout << rootnode->value << " ";
}

int main() {
    // Creating a simple binary tree
    Node* root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(10);
    root->left->left = new Node(6);
    root->left->right = new Node(5);
    root->right->right = new Node(11);
    
    cout << "Post-order traversal of the binary tree is: ";
    postOrderTraversal(root);
    
    return 0;
}