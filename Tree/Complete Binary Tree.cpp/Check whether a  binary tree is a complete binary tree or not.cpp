#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node* newNode(char key){
        Node *node=(Node*)malloc(sizeof(Node));
        node->data=key;
        node->left=nullptr;
        node->right=nullptr;
        return node;
        
    }
};

unsigned int countNode(Node* root){
    if(root==nullptr){
        return 0;
    }
    return (1+countNode(root->left)+countNode(root->right));
}


bool isComplete(Node *root,unsigned int index,unsigned int number_nodes){
    if(root==nullptr){
        return false;
    }
    if(index>=number_nodes){
        return false;
    }
    return (isComplete(root->left,2*index+1,number_nodes)&&
            isComplete(root->right,2*index+2,number_nodes));
};

int main(){
    Node* root=new Node();
    root->newNode(1);
    root->left=new Node();
    root->left->newNode(2);
    root->right=new Node();
    root->right->newNode(3);
    root->left->left=new Node();
    root->left->left->newNode(4);
    root->left->right=new Node();
    root->left->right->newNode(5);
    root->right->left=new Node();
    root->right->left->newNode(6);

    unsigned int node_count=countNode(root);
    unsigned int index=0;

    if(isComplete(root,index,node_count)){
        cout<<"The binary tree is a complete binary tree";
    }else{
        cout<<"The binary tree is not a complete binary tree";
    }
    return 0;
}