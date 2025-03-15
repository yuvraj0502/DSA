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


bool isIdentical(Node* root1,Node* root2){
    if(root1==nullptr && root2==nullptr){
        return true;
    }
    if(root1==nullptr || root2==nullptr){
        return false;
    }
    return (root1->data==root2->data) &&
            isIdentical(root1->left,root2->left)&&
            isIdentical(root1->right,root2->right);
}

int main(){
    Node* root1=new Node(1);
    root1->left=new Node(2);
    root1->right=new Node(3);
    root1->left->left=new Node(4);
    root1->left->right=new Node(5);
    root1->right->left=new Node(6);
    root1->right->right=new Node(7);

    Node* root2=new Node(1);
    root2->left=new Node(2);
    root2->right=new Node(3);
    root2->left->left=new Node(4);
    root2->left->right=new Node(5);
    root2->right->left=new Node(6);
    root2->right->right=new Node(7);

    if(isIdentical(root1,root2)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }

    return 0;
}