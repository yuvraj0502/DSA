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

Node* search(Node* root,int key){
    if(root==nullptr || root->data==key){
        return root;
    }
    if (root->data<key){
        return search(root->right,key);
    }
    return search(root->left,key);
};


int main(){
    Node* root= new Node(50);
    root->left=new Node(30);
    root->right=new Node(70);
    root->left->left=new Node(20);
    root->left->right=new Node(40);
    root->right->left=new Node(60);
    root->right->right=new Node(80);
    if(search(root,40)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}