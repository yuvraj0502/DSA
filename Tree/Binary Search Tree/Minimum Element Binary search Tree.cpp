// User function Template for C++

// Function to find the minimum element in the given BST.

/* struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}
*/

class Solution{
    public:
    void inorder(Node* root,vector<int>&sortedIndex){
        if(root==nullptr){
            return;
        }
        inorder(root->left,sortedIndex);
        sortedIndex.push_back(root->data);
        inorder(root->right,sortedIndex);
    }

    int minValue(Node* root){
        vector<int>ans;
        inorder(root,ans);
        return ans[0];
    }
}