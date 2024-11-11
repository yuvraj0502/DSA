#include<bits/stdc++.h>
using namespace std;

class queue{
    int rear;
    int front;
    int *arr;
    int size;
    
    public:
    queue(int s){
        rear=-1;
        front=-1;
        size=s;
        arr=new int[s];
    }

    void enqueue(int value){
        if((front==0 && rear==size-1) || ((rear+1)%size==front)){
            cout<<"Queue is not empty!!"<<endl;
            return;
        }
        else if(front==-1){
            rear=front=0;
            arr[rear]=value;
        }
        else if(rear==size-1 && front!=0){
            rear=0;
            arr[rear]=value;
        }
        else{
            rear++;
            arr[rear]=value;
        }
    }

    int dequeue(){
        if(front==-1){
            cout<<"No element in the queue!!"<<endl;
            return 0;
        }
        int data=arr[front];
        arr[front]=-1;
        if(front==rear){
            front=-1;
            rear=-1;
        }
        else if(front==size-1){
            front=0;
        }
        else{
            front++;
        }
        return data;
    }

    void display(){
        if(front==-1){
            cout<<"Queue is empty!!"<<endl;
            return;
        }
        else if(rear>=front){
            for(int i=front;i<=rear;i++){
                cout<<arr[i]<<endl;
            }
        }
        else{
            for(int i=front;i<size;i++){
                cout<<arr[i]<<endl;
            }
            for(int i=0;i<=rear;i++){
                cout<<arr[i]<<endl;
            }
        }
    }
}

Time Complexity: 
Enqueue: O(1) because no loop is involved for a single enqueue.
Dequeue: O(1) because no loop is involved for one dequeue operation.
Auxiliary Space: O(N) as the queue is of size N.