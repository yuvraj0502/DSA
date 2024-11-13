insertFront() : Adds an item at the front of deque
insertRear() : Adds an item at the rear of deque
deleteFront() : Deletes an item from front of deque
deleteRear() : Deletes an item from rear of deque

#include<bist/stdc++.h>
using namespace std;

#define n 100

class queue{
    int arr[n];
    int front;
    int rear;
    int size;
    
    public:
    queue(int size){
        front=-1;
        rear=-1;
        this->size=size;
    }

    void insertFront(int value);
    void insertRear(int value);
    void deleteFront();
    void deleteRear();
    bool isFull();
    bool isEmpty();
    int getFront();
    int getRear();
}
bool queue::isFull(){
    if((front==0 && rear=size-1) || front=rear+1){
        cout<<"Queue is full!!"<<endl;
        return;
    }
}

bool queue::isEmpty(){
    if(front==-1){
        cout<<"Queue is empty!!"<<endl;
        return;
    }
}

void queue::insertFront(int value){
    if(isFull()){
        cout<<"Queue is OverFlow!!"<<endl;
        return;
    }
    else if(front==-1){
        front=0;
        rear=0;
    }
    else if(front==0){
        front=size-1;
    }
    else{
        front--;
    }
    arr[front]=value;
}

void queue::insertRear(int value){
    if(isFull()){
        cout<<"Queue is OverFlow!!"<<endl;
        return;
    }
    else if(front==-1){
        front=0;
        rear=0;
    }
    else if(rear=size-1){
        rear=0;
    }
    else{
        rear++;
    }
    arr[rear]=value;
}

void queue::deleteFront(){
    if(isEmpty()){
        cout<<"Queue is underFlow!!"<<endl;
        return;
    }
    else if(front==rear){
        front=0;
        rear=0
    }
    else{
        if(front==size-1){
            front=0;
        }
        else{
            front++;
        }
    }
}

void queue::deleteRear(){
    if(isEmpty()){
        cout<<"Queue is underFlow!!"<<endl;
        return;
    }
    else if(front==rear){
        front=0;
        rear=0;
    }
    else if(rear==0){
        rear=size-1;
    }
    else{
        rear--;
    }
}

int queue::getFront(){
    if(isEmpty()){
        cout<<"Queue is underFlow!!"<<endl;
        return -1;
    }
    return arr[front];
}

int queue::getRear(){
    if(isEmpty()){
        cout<<"Queue is underFlow!!!"<<endl;
        return -1;
    }
    return arr[rear];
}


