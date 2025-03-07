#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int key){
        data=key;
        left=nullptr;
        right=nullptr;
    }
};

Node* insertValue(Node* root,int data){
    if(root==nullptr){
        return new Node(data);
    }
    queue<Node*>q;
    q.push(root);

    while(!q.empty()){
        Node *curr=q.front();
        q.pop();

        if(curr->left!=nullptr){
            q.push(curr->left);
        }else{
            curr->left=new Node(data);
            return root;
        }
        if(curr->right!=nullptr){
            q.push(curr->right);
        }else{
            curr->right=new Node(data);
            return root;
        }
    }
};

void inorder(Node* curr){
    if(curr==nullptr){
        return;
    }
    inorder(curr->left);
    cout<<curr->data<<" ";
    inorder(curr->right);
}

int main(){
    Node* root=new Node(10);
    root->left=new Node(11);
    root->left->left=new Node(7);
    root->right=new Node(9);
    root->right->left=new Node(15);
    root->right->right=new Node(8);

    cout<<"Inorder traversal before insertion: ";
    inorder(root);
    cout<<endl;

    int key=12;
    root=insertValue(root,key);

    cout<<"Inorder traversal after insertion: ";
    inorder(root);
    cout<<endl;

    return 0;
}