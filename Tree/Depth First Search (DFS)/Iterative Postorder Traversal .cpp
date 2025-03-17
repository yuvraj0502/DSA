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


void PostorderTraversal(Node* root){
    if(root==nullptr){
        return;
    }
    stack<Node*>st1,st2;
    st1.push(root);
    while(!st1.empty()){
        Node* curr=st1.top();
        st1.pop();
        st2.push(curr);

        if(curr->left!=nullptr){
            st1.push(curr->left);
        }
        if(curr->right!=nullptr){
            st1.push(curr->right);
        }
    }
    while(!st2.empty()){
        cout<<st2.top()->data<<" ";
        st2.pop();
    }
};

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Postorder Traversal: ";
    PostorderTraversal(root);
    return 0;
}