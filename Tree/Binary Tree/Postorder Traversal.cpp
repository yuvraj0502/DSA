// -> Postorder Traversal is defined as a type of tree traversal technique
//    which follows the left right root pattern.

// -> The left subtree is traversed first.
// -> Then the right subtree is traversed.
// -> Finally, the root node is visited.


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

void printPostorder(Node* root){
    if(root==nullptr){
        return;
    }
    printPostorder(root->left);
    printPostorder(root->right);
    cout<<root->data<<" ";
    return ;
}


int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    printPostorder(root);
    return 0;
}