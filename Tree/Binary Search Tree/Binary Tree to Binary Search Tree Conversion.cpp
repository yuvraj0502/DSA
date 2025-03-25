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


void inorder(Node* root,vector<int>&sortedIndex){
    if(root==nullptr){
        return;
    }
    inorder(root->data,sortedIndex);
    sortedIndex.push_back(root->data);
    inorder(root->right,sortedIndex);
};

void constructBST(Node* root,vector<int>&nodes,int &index){
    if(root==nullptr){
        return;
    }
    root->left=constructBST(root->left,nodes,index);
    root->data=nodes[index++];
    root->right=constructBST(root->right,nodes,index);
};

void BinaryTreeToBST(Node* root){
    vector<int>nodes;
    inorder(root,nodes);
    sort(nodes.begin(),nodes.end());
    
    int index=0;
    constructBST(root,nodes,index)
    return root;
};

void printorder(Node* root){
    if(root==nullptr){
        return;
    }
    printorder(root->left);
    cout<<root->data<<" ";
    printorder(root->right);
}