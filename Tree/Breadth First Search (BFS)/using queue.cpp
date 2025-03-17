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

vector<vector<int>> levelOrder(Node* root){
    if(root==nullptr){
        return {};
    }

    vector<vector<int>>res;
    queue<Node*>q;
    q.push(root);
    int currLevel=0;

    while(!q.empty()){
        int len=q.size();
        res.push_back({});
        for(int i=0;i<len;i++){
            Node* curr=q.front();
            q.pop();
            res[currLevel].push_back(curr->data);
            if(curr->left!=nullptr){
                q.push(curr->left);
            }
            if(curr->right!=nullptr){
                q.push(curr->right);
            }
        }
        currLevel++;
    }
    return res;
}

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    vector<vector<int>>res=levelOrder(root);
    for(auto x:res){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}