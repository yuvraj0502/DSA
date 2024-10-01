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

void insertAtHead(node* &head,int val){
    node* n=new node(val);
    node* temp=head;

    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }

    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}

void display(node* head){
    do
    {
        cout<<head->data<<"->";
        head=head->next;
    } while (head!=NULL);
    cout<<endl;
}