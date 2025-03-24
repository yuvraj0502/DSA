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

void calculateSum(Node* root,int &k,int &ans){
    if(root==nullptr){
        return;
    }
    if(root->left!=nullptr){
        calculateSum(root->left,k,ans);
    }
    if(k>0){
        ans+=root->data;
        k--;
    }
    if(root->right!=nullptr){
        calculateSum(root->right,k,ans);
    }
};

int sumOfKSmallestElements(Node* root,int k){
    int ans=0;
    calculateSum(root,k,ans);
    return ans;
}