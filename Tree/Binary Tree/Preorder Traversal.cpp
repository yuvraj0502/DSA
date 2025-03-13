// -> Preorder Traversal is defined as a type of tree traversal technique
//    which follows the root left right pattern.

// -> The root node is visited first
// -> then the left subtree is traversed
// -> Finally,the right subtree is traversed.


#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int key){
        data=key;
        left=nullptr;
        right=nullptr;
    }
};

void printPreorder(Node* root){
    if(root==nullptr){
        return;
    }
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
};

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    printPreorder(root);
    return 0;
}