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

int CeilValue(Node* root,int input){
    if(root==nullptr){
        return -1;
    }
    else if(root->data<input){
        return CeilValue(root->right,input);
    }
    int ceil=CeilValue(root->left,input);
    return (ceil>=input)>?ceil:input;
}