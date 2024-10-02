#include<bits10_1.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
}


void EvenAfterOdd(node* &head){
    node* odd=head;
    node* even=head->next;
    node* evenstart=even;

    while(odd->next!=NULL && even->next!=NULL){
        odd->next=even->next;
        odd=odd->next;

        even->next=odd->next;
        even=even->next;
    }

    odd->next=evenstart;
    if(odd->next!=NULL){
        even->next=NULL;
    }
}