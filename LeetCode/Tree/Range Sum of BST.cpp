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
class Solution {
    public:
        int rangeSumBST(TreeNode* root, int low, int high) {
            if(root==nullptr){
                return 0;
            }
            int currSum=(root->val>=low && root->val<=high) ?
                         root->val :0;
            
            int leftSum=rangeSumBST(root->left,low,high);
            int rightSum=rangeSumBST(root->right,low,high);
            return currSum+leftSum+rightSum;
        }
    };