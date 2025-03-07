#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* rigth;
};

struct Node *newNode(int value){
    Node* node=new Node;
    node->data=value;
    node->left=nullptt;
    node->right=nullptr;
    return node;
};


struct Node* insertValue(struct Node* root,int value,queue<Node*>&q){
    Node* node=newNode(value);
    if(!root){
        root=node;
    }
    else if(q.front()->left==nullptr){
        q.front()->left=node;
    }
    else{
        q.front()->right=node;
        q.pop();
    }
    q.push(node);
    return root;
}

Node* createTree(int arr[],int n){
    Node* root=nullptr;
    queue<Node*>q;
    for(int i=0;i<n;i++){
        root=insertValue(root,arr[i],q);
    }
    return root;
}

void levelOrder(struct Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*>q;
    q.push(root);

    while(!q.empty()){
        cout<<q.front()->data<<" ";
        if(q.front()->left!=nullptr){
            q.push(q.front()->left);
        }
        if(q.front()->right!=nullptr){
            q.push(q.front()->right);
        }
        q.pop();
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root=createTree(arr,n);
    levelOrder(root);
    return 0;
}