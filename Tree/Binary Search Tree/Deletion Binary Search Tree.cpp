#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int k){
        key=k;
        left=nullptr;
        right=nullptr;
    }
};

Node* getSuccessor(Node* curr){
    curr=curr->right;
    while(curr!=nullptr && curr->left!=nullptr){
        curr=curr->left;
    }
    return curr;
}

Node* deleteNode(Node* root,int key){
    if(root==nullptr){
        return root;
    }
    if(root->key>key){
        root->left=deleteNode(root->left,key);
    }
    else if(root->key<key){
        root->right=deleteNode(root->right,key);
    }
    else{
        if(root->left==nullptr){
            Node* temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==nullptr){
            Node* temp=root->left;
            delete root;
            return temp;
        }
        else{
            Node* succ=getSuccessor(root);
            root->key=succ->key;
            root->right=deleteNode(root->right,succ->key);
        }
    }
    return root;
}

void inorder(Node* root){
    if(root==nullptr){
        return;
    }
    inorder(root->left);
    cout<<root->key<<" ";
    inorder(root->right);
}

int main(){
    Node* root=new Node(10);
    root->left=new Node(5);
    root->right=new Node(15);
    root->left->left=new Node(3);
    root->left->right=new Node(7);
    root->right->left=new Node(12);
    root->right->right=new Node(18);
    inorder(root);
    cout<<endl;
    root=deleteNode(root,5);
    inorder(root);
    return 0;
}