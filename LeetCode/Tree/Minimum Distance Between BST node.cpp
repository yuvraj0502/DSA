/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

 class Solution{
    public:
    int inorder(TreeNode* root,int &minDifferce,TreeNode* prev){
        if(root==nullptr){
            return minDifferce;
        }
        inorder(root->left,minDifferce,prev);
        if(prev){
            minDifferce=min(minDifferce,root->val-prev->val);
        }
        prev=root;
        inorder(root->right,minDifferce,prev);
        return minDifferce;
    };

    int minDiffInBST(TreeNode* root){
        int minDifferce=INT_MAX;
        TreeNode* prev=nullptr;
        inorder(root,minDifferce,prev);
        return minDifferce;
    }
 }