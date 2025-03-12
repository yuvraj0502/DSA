#include<bits/stdc++.h>
using namespace std;

class Lnode{
    public:
    int data;
    Lnode* next;

    Lnode(int key){
        data=key;
        next=nullptr;
    }
};

class Tnode{
    public:
    int data;
    Tnode* left;
    Tnode* right;

    Tnode(int key){
        data=key;
        left=nullptr;
        right=nullptr;
    }
};

Tnode* convert(Lnode* head){
    if(head==nullptr){
        return nullptr;
    }
    queue<Tnode*>q;
    Tnode* root=new Tnode(head->data);
    q.push(root);
    head=head->next;

    while(head){
        Tnode* parent=q.front();
        q.pop();

        Tnode* leftChild=nullptr;
        Tnode* rightChild=nullptr;

        if(head){
            leftChild=new Tnode(head->data);
            q.push(leftChild);
            head=head->next;
        }

        if(head){
            rightChild=new Tnode(head->data);
            q.push(rightChild);
            head=head->next;
        }
        parent->left=leftChild;
        parent->right=rightChild;
    }
    return root;
}

void inorder(Tnode* root){
    if(root==nullptr){
        return ;
    }
    queue<Tnode*>q;
    q.push(root);

    while(!q.empty()){
        Tnode* curr=q.front();
        q.pop();

        cout<<curr->data<<" ";
        if(curr->left){
            q.push(curr->left);
        }
        if(curr->right){
            q.push(curr->right);
        }
    }
}

int main(){
    Lnode* head=new Lnode(10);
    head->next=new Lnode(12);
    head->next->next=new Lnode(15);
    head->next->next->next=new Lnode(25);
    head->next->next->next->next=new Lnode(30);
    head->next->next->next->next->next=new Lnode(36);

    Tnode* root=convert(head);
    inorder(root);
    return 0;
}