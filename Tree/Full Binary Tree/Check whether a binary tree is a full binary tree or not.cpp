// -> A full binary tree is defined as a binary tree in which all nodes have either
//    zero or two childre node.


// -> To check whether a binary tree is a full binary tree we need to test the following 
//    cases:-

// 1. If a binary tree node is NULL then it is a full binary tree. 
// 2. If a binary tree node does have empty left and right sub-trees, then it 
//    is a full binary tree by definition. 
// 3. If a binary tree node has left and right sub-trees, then it is a part of a 
//    full binary tree by definition. In this case recursively check if the left and 
//    right sub-trees are also binary trees themselves. 
// 4. In all other combinations of right and left sub-trees, the binary tree is not 
//    a full binary tree.
   


#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node *newNode(char k){
    struct Node *node=new Node;
    node->data=k;
    node->left=NULL:
    node->right=NULL;
    return node;
};

bool isFullBinaryTree(struct Node* root){
    if(root==NULL){
        return true;
    }

    if(root->left==NULL && root->right==NULL){
        return true;
    }

    if(root->left!=NULL && root->right!=NULL){
        return isFullBinaryTree(root->left) && isFullBinaryTree(root->right);
    }

    return false;
}