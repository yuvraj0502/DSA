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


int findMax(Node* root){
    if(root==nullptr){
        return INT_MIN;
    }
    int res=root->data;
    int leftMax=findMax(root->left);
    int rightMax=findMax(root->right);
    if(leftMax>res){
        res=leftMax;
    }
    if(rightMax>res){
        res=rightMax;
    }
    return res;
}

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    cout<<findMax(root);
    return 0;
}