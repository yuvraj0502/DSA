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

bool isCompleteBinaryTree(Node* root){
    if(root==nullptr){
        return false;
    }
    queue<Node*>q;
    q.push(root);
    bool flag=false;

    while(!q.empty){
        Node* curr=q.front();
        q.pop();

        if(curr->left){
            if(flag==true){
                return false;
            }
            q.push(curr->left);
        }else{
            flag=true;
        }

        if(curr->right){
            if(flag==true){
                return false;
            }
            q.push(curr->right);
        }else{
            flag=true;
        }
    }
    return true;
}

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);

    if(isCompleteBinaryTree(root)){
        cout<<"The binary tree is a complete binary tree";
    }else{
        cout<<"The binary tree is not a complete binary tree";
    }
    return 0;
}