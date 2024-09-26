#include<bits10_1.h>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    node(int val){
        data=val;
        prev=NULL;
        next=NULL;
    }
};

void insertAtHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    if(head!-NULL){
        head->prev=n;
    }
}


void display(node* head){
    while(head!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
     node* head=NULL;
     insertAtHead(head,1);
     insertAtHead(head,2);
     insertAtHead(head,3);
     display(head);
}