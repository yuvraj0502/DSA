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

int findLength(node* head){
    int length=0;
    while(head!=NULL){
        head=head->next;
        lenght++;
    }
    return length;
}

int intersection(node* head1,node* head2){
    int length1=findLength(head1);
    int length2=findLength(head2);

    node* ptr1;
    node* ptr2;
    int diff=0;
    if(length1>length2){
        diff=length1-length2;
        ptr1=head1;
        ptr2=head2;
    }else{
        diff=length2-length1;
        ptr1=head2;
        ptr2=head1;
    }

    while(diff){
        ptr1=ptr1->next;
        if(ptr1==NULL){
            return -1;
        }
        diff--;
    }

    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;

}



