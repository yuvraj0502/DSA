#include<bits/stdc++.h>
using namespace std;

char tree[10];
int root(char key){
    if(tree[0]!='\0'){
        cout<<"Tree already had root";
    }
    else{
        tree[0]=key;
    }
    return 0;
}

int self_left(char key,int parent){
    if(tree[parent]=='\0'){
        cout<<"Can't set child at "<< (parent*2)+1<<"no parent found";
    }
    else{
        tree[(parent*2)+1]=key;
    }
    return 0;
}

int self_right(char key,int parent){
    if(tree[parent]=='\0'){
        cout<<"Can't set child at "<< (parent*2)+2<<"no parent found";

    }
    else{
        tree[(parent*2)+2]=key;
    }
    return 0;
}

int printTree(){
    for(int i=0;i<10;i++){
        if(tree[i]!='\0'){
            cout<<tree[i];
        }
        else{
            cout<<"-";
        }
    }
    return 0;
}

int main(){
    root('A');
    self_left('B',0);
    self_right('C',0);
    self_left('D',1);
    self_right('E',1);
    self_right('F',2);
    printTree();
    return 0;
}