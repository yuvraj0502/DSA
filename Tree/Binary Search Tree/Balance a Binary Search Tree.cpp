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

void storeInorder(Node* root,vector<int>&node){
    if(root==nullptr){
        return;
    }
    storeInorder(root->left,node);
    node.push_back(root->data);
    storeInorder(root->right,node);
}

Node* buildBalancedBST(vector<int>&node,int start,int end){
    if(start>end){
        return nullptr;
    }
    int mid=start+(end-start)/2;
    Node* root=new Node(node[mid]);
    root->left=buildBalancedBST(node,start,mid-1);
    root->right=buildBalancedBST(node,mid+1,end);
    return root;
}

Node* balanceBST(Node* root){
    vector<int>node;
    storeInorder(root,node);
    return buildBalancedBST(node,0,node.size()-1);
}

void inorder(Node* root){
    if(root==nullptr){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    Node* root=new Node(1);
    root->right=new Node(2);
    root->right->right=new Node(3);
    root->right->right->right=new Node(4);
    cout<<"Inorder Traversal of BST: ";
    inorder(root);
    cout<<endl;
    Node* balancedRoot=balanceBST(root);
    cout<<"Inorder Traversal of Balanced BST: ";
    inorder(balancedRoot);
    return 0;
}