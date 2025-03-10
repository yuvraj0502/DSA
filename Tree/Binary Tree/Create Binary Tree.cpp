#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int key){
        data=key;
        left=NULL;
        right=NULL;
    }
};

int main(){
    Node* firstNode=new Node(2);
    Node* secondNode=new Node(3);
    Node* thirdNode=new Node(4);
    Node* fourNode=new Node(5);

    firstNode->left=secondNode;
    firstNode->right=thirdNode;
    secondNode->left=fourNode;
    return 0;
}