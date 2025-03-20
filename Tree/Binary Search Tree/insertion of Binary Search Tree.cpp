// -> A new key is always inserted at the leaf by maintaining the property of 
//    the binary search tree. We start searching for a key from the root until we 
//    hit a leaf node. Once a leaf node is found, the new node is added as a child 
//    of the leaf node. 

// 1. Create a new node with the given key.
// 2. If the tree is empty, then the new node will be the root.
// 3. Otherwise, start from the root and compare it with the key. If the key is 
//    less than the root, then move to the left subtree. If the key is greater than 
//    the root, then move to the right subtree.
// 4. Repeat step 3 until a leaf node is found.
// 5. Add the new node as the left or right child of the leaf node based on the 
//    comparison in step 3.
// 6. Return the root of the tree.


#include<bits/stdc+.h>
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

Node* insertNode(Node* root,int key){
    if(root==nullptr){
        return new Node(key);
    }
    if(root->data==key){
        return root;
    }
    if(root->data<key){
        root->right=insertNode(root->right,key);
    }
    if(root->data>key){
        root->left=insertNode(root->left,key);
    }
    return root;
}

void inorderTraversal(Node* root){
    if(root=nullptr){
        return ;
    }
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
};

int main(){
    Node* root=nullptr;
    root=insertNode(root,50);
    insertNode(root,30);
    insertNode(root,20);
    insertNode(root,40);
    insertNode(root,70);
    insertNode(root,60);
    insertNode(root,80);
    inorderTraversal(root);
    return 0;
}