#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node *newNode(int data){
    Node *node=new Node();
    node->data=k;
    node->left=NULL;
    node->right=NULL;
    return node;
};

bool isLeafNode(Node *root){
    return !root->left && !root->right;
};

bool isFullBinaryTree(Node *root){
    if(root==NULL){
        return true;
    }
    queue<Node*>q;
    q.push(root);

    while(!q.empty()){
        root=q.front();
        q.pop();

        if(root==NULL){
            return false;
        }
        if(!isLeafNode(root)){
            q.push(root->left);
            q.push(root->right);
        }
    }
    return true;
}