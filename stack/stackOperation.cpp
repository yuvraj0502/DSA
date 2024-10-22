#include<bits/stdc++.h>
using namespace std;

#define n 100;

class stack{
    int* arr;
    int top;

    public:
    stack(){
        arr=new int[n];
        top=-1;
    }

    void push(int value){
        if(top==n-1){
            cout<<"stack is overflow:"<<endl;
            return;
        }
        top++;
        arr[top]=value;
    }

    void pop(){
        if(top==-1){
            cout<<"No element to pop:"<<endl;
            return;
        }
        top--;
    }

    int Top(){
        if(top==-1){
            cout<<"No element in stack:"<<endl;
            return -1;
        }
        return arr[top];
    }

    bool empty(){
        return top==-1;
    }
}

int main(){
    
}