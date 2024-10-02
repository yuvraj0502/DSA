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

void DeleteAtHead(node* &head){
    node* todelete=head;
    node* temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=head->next;
    head=head->next;
    delete todelete;
}

void Deletion(node* &head,int pos){
    node* temp=head;
    int count=1;

    if(pos==1){
        DeleteAtHead(head);
        return;
    }

    while(count!=pos-1){
        temp=temp->next;
        count++;
    }

    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}