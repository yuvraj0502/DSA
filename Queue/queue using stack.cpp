#include<bits/stdc++.h>
#include<stack>
using namespace std;

class queue{
    stack<int>st1;
    stack<int>st2;

    public:
    void push(int value){
        st1.push(value);
    }

    int pop(){
        if(st1.empty() && st2.empty()){
            cout<<"Queue has no element!!"<<endl;
            return -1;
        }
        if(st2.empty()){
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
        }
        int topValue=st2.top();
        st2.pop();
        return topValue;
    }

    bool empty(){
        if(st1.empty() && st2.empty()){
            return true;
        }
        return false;
    }
}