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

int sum(Node* root){
    if(root==nullptr){
        return 0;
    }
    return root->data+sum(root->left)+sum(root->right);
};

bool isSumTree(Node* root){
    if(root==nullptr || (root->left==nullptr && root->right==nullptr)){
        return true;
    }
    int leftSum=sum(root->left);
    int rightSum=sum(root->right);

    if((root->data==leftSum+rightSum) && isSumTree(root->left) && 
       isSumTree(root->right)){
        return true;
    }
    return false;
}

int main(){
    Node* root=new Node(26);
    root->left=new Node(10);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(6);
    root->right->right=new Node(3);

    if(isSumTree(root)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }

    return 0;
}