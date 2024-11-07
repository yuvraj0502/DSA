#include<bits/stdc++.h>
using namespace std;


class stack{
    int n;
    queue<int>q1;
    queue<int>q2;

    public:
    stack(){
        n=0;
    }

    void pop(){
        if(q1.empty()){
            cout<<"no element in the queue!!"<<endl;
            return;
        }
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        n--;

        queue<int>temp=q1;
        q1=q2;
        q2=temp;
    }

    void push(int value){
        q1.push(value);
        n++;
    }

    int top(){
        if(q1.empty()){
            return -1;
        }
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        int topValue=q1.front();
        q2.push(topValue);

        queue<int>temp=q1;
        q1=q2;
        q2=temp;

        return topValue;
    }
}
