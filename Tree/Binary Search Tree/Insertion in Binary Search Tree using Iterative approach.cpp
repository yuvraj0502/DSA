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

Node* insertNode(Node* root,int key){
    Node* temp=new Node(key);
    if(root==nullptr){
        return temp;
    }
    Node* parent=nullptr;
    Node* curr=root;
    while(curr!=nullptr){
        parent=curr;
        if(curr->data<key){
            curr=curr->right;
        }
        else if(curr->data>key){
            curr=curr->left;
        }
        else{
            return root;
        }
    }
    if(parent->data<key){
        parent->right=temp;
    }else{
        parent->left=temp;
    }
    return root;
};

void inorder(Node* root){
    if(root==nullptr){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    Node* root=nullptr;
    root=insertNode(root,50);
    root=insertNode(root,30);
    root=insertNode(root,20);
    root=insertNode(root,40);
    root=insertNode(root,70);
    root=insertNode(root,60);
    root=insertNode(root,80);
    inorder(root);
    return 0;
}