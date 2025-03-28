#include<bits/stdc++.h>
using namespace std;


struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        data=val;
        left=nullptr;
        right=nullptr;
    }
};

class Solution{
    public:
    vector<int>sortedIndex;
    void inorder(TreeNode* root){
        if(root==nullptr){
            return;
        }
        inorder(root->left);
        sortedIndex.push_back(root->data);
        inorder(root->right);
    };

    bool findTarget(TreeNode* root,int k){
        inorder(root);
        int start=0;
        int end=sortedIndex.size()-1;
        while(start<end){
            int sum=sortedIndex[start]+sortedIndex[end];
            if(sum==k){
                return true;
            }
            else if(sum<k){
                start++;
            }
            else{
                end--;
            }
        }
        return false;
    }
}