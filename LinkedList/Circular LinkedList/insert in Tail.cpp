#include<bits10_1.h>
using namespace std;

class node{
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
}


void insertAtTail(node* &head,int val){
    node* n=new node(val);
    node* temp=head;

    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}