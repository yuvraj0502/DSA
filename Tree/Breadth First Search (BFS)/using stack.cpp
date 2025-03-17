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

void levelOrderRecursive(Node* root,int level,vector<vector<int>>&res){
    if(root==nullptr){
        return;
    }
    if(res.size()<=level){
        res.push_back({});
    }
    res[level].push_back(root->data);
    levelOrderRecursive(root->left,level+1,res);
    levelOrderRecursive(root->right,level+1,res);
}

vector<vector<int>> levelOrderTraversal(Node* root){
    vector<vector<int>>res;
    levelOrderRecursive(root,0,res);
    return res;
}

int main(){
  Node* root=new Node(1);
  root->left=new Node(2);
  root->right=new Node(3);
  root->left->left=new Node(4);
  root->left->right=new Node(5);
  vector<vector<int>>res=levelOrderTraversal(root);
    for(auto x:res){
        for(auto y:x){
        cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}