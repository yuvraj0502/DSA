#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int key){
        data=key;
        left=nullptr;
        right=nullptr;
    }
};

void deleteDeepest(Node *root,Node *dNode){
    queue<Node*>q;
    q.push(root);

    Node* curr;
    while(!q.empty()){
        curr=q.front();
        q.pop();

        if(curr==dNode){
            curr=nullptr;
            delet(dNode);
            return ;
        }

        if(curr->right){
            if(curr->right==dNode){
                curr->right=nullptr;
                delete(dNode);
                return;
            }
            q.push(curr->right);
        }

        if(curr->left){
            if(curr->left==dNode){
                curr->left=nullptr;
                delete(dNode);
                return ;
            }
            q.push(curr->left);
        }
    }
}

Node* deletion(Node* root,int key){
    if(root==nullptr){
        return nullptr;
    }

    if(root->left==nullptr && root->right==nullptr){
        if(root->data==key){
            return nullptr;
        }else{
            return root;
        }
    }

    queue<Node*>q;
    q.push(root);

    Node* curr;
    Node* keyNode=nullptr;

    while(!q.empty()){
        curr=q.front();
        q.pop();

        if(curr->data==key){
            keyNode=curr;
        }
        if(curr->left){
            q.push(curr->left);
        }
        if(curr->right){
            q.push(curr->right);
        }
    }
    if(keyNode!=nullptr){
        int x=curr->data;
        deleteDeepest(root,curr);
        keyNode->data=x;
    }
    return root;
}

void inorder(Node* curr){
    if(curr==nullptr){
        return ;
    }
    inorder(curr->left);
    cout<<curr->data<<" ";
    inorder(curr->right);
}

int main(){
    Node* root=new Node(10);
    root->left=new Node(11);
    root->left->left=new Node(7);
    root->left->right=new Node(12);
    root->right=new Node(9);
    root->right->left=new Node(15);
    root->right->right=new Node(8);

    cout<<"Inorder traversal before deletion: ";
    inorder(root);
    cout<<endl;

    int key=11;
    root=deletion(root,key);

    cout<<"Inorder traversal after deletion: ";
    inorder(root);
    cout<<endl;

    return 0;
}