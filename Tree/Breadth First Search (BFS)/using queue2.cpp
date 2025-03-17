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


void bfs(Node* root){
    if(root==nullptr){
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        for(int i=0;i<q.size();i++){
            Node* curr=q.front();
            q.pop();
            cout<<curr->data<<" ";
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
        cout<<endl;
    }
};

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->right=new Node(6);
    cout<<"BFS Traversal: "<<endl;
    bfs(root);
    return 0;
}