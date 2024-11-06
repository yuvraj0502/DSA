#include<bits/stdc++.h>
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

class queue{
    
    node* front;
    node* back;
    
    public:
    queue(){
        front=NULL;
        back=NULL;
    }


    void push(int value){
        node* n=new node(value);

        if(front==NULL){
            back=value;
            front=value;
            return;
        }
        back->next=value;
        back=value;
    }

    void pop(){
        if(front==NULL){
            cout<<"Queue is underflow!!"<<endl;
            return;
        }
        node* todelet=front;
        front=front->next;
        delete todelet;
    }

    int peek(){
        if(front==NULL){
            cout<<"no element in queue!!"<<endl;
            return -1;
        }
        return front->data;
    }

    bool empty(){
        if(front==NULL){
            return true;
        }
        return false;
    }
}