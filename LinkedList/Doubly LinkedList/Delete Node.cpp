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

void deleteAtHead(node* &head){
    node* todelete=head;

    head=head->next;
    head->prev=NULL;

    delete todelete;
}

void deletion(node* &head, int pos){
    int count=1;
    node* temp=head;

    if(pos==1){
        deleteAtHead(head);
        return;
    }

    while(temp!=NULL && count!=pos){
        temp=temp->next;
        count++;
    }

    temp->prev->next=temp->next;

    if(temp->next!=NULL){
        temp->next->prev=temp->prev;
    }

    delete temp;
}

int main(){

}