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

void PreorderTraversal(Node* root){
    if(root==nullptr){
        return;
    }
    stack<Node*>st;
    st.push(root);
    while(!st.empty()){
        Node* curr=st.top();
        st.pop();
        cout<<curr->data<<" ";
        if(curr->right!=nullptr){
            st.push(curr->right);
        }
        if(curr->left!=nullptr){
            st.push(curr->left);
        }
    }
};

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Preorder Traversal: ";
    PreorderTraversal(root);
    return 0;
}