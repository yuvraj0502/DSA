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

int maxDepth(Node* root){
    if(root==nullptr){
        return -1;
    }
    int leftHeight=maxDepth(root->left);
    int rightHeiight=maxDepth(root->right);
    return max(leftHeight,rightHeiight)+1;
}

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->left->left=new Node(5);
    cout<<maxDepth(root);
    return 0;
}