#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int key) {
        data = key;
        left = nullptr;
        right = nullptr;
    }
};

Node* insert(Node* root, int key) {
    if (root == nullptr) {
        return new Node(key);
    }
    if (key < root->data) {
        root->left = insert(root->left, key);
    } else {
        root->right = insert(root->right, key);
    }
    return root;
}

void inorder(Node* root, vector<int>& sortedIndex) {
    if (root == nullptr) {
        return;
    }
    inorder(root->left, sortedIndex);
    sortedIndex.push_back(root->data);
    inorder(root->right, sortedIndex);
}

int secondLarger(Node* root) {
    vector<int> ans;
    inorder(root, ans);

    if (ans.size() < 2) {
        cout << "No second largest element found.\n";
        return -1; 
    }
    return ans[ans.size() - 2];
}

int main() {
    Node* root = nullptr;
    int n;
    cout << "Enter number of elements in BST: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        root = insert(root, val);
    }

    cout << "Second Largest Element: " << secondLarger(root) << endl;
    return 0;
}
