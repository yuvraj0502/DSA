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

int floorValue(Node* root,int x){
    if(root==nullptr){
        return INT_MAX;
    }
    int floorValue=INT_MAX;
    while(root!=nullptr){
        if(root->data==x){
            return root->data;
        }
        else if(root->data>x){
            root=root->left;
        }
        else{
            floorValue=root->data;
            root=root->right;
        }
    }
    return floorValue;
}