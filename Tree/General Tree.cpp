#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    vector<Node*>children;
};

Node* newNode(int key){
    Node* temp=new Node;
    temp->key=key;
    return temp;
}

void LevelOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        for(int i=0;i<n;i++){
            Node* temp=q.front();
            q.pop();
            cout<<temp->key<<" ";
            for(auto child:temp->children){
                q.push(child);
            }
        }
        cout<<endl;
    }
};

int main(){
    Node* root=newNode(1);
    (root->children).push_back(newNode(2));
    (root->children).push_back(newNode(3));
    (root->children).push_back(newNode(4));
    (root->children[0]->children).push_back(newNode(5));
    (root->children[0]->children).push_back(newNode(6));
    (root->children[2]->children).push_back(newNode(7));
    (root->children[2]->children).push_back(newNode(8));
    LevelOrderTraversal(root);
    return 0;
}
