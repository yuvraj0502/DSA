Given an empty queue of integers, add numbers to the queue, then print the 
difference between the first and the last element. 

#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main(){
    queue<int>qu;

    qu.push(8);
    qu.push(7);
    qu.push(6);
    qu.push(5);
    qu.push(4);
    qu.push(3);
    qu.push(2);
    qu.push(1);


    if(qu.front()>qu.back()){
        cout<<qu.front()-qu.back();
    }
    else if(qu.front()<qu.back()){
        cout<<qu.back()-qu.front();
    }
    else{
        return '0';
    }

    return 0;
}

