#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
    


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size;
    int start;
    int end;
    int input;
    int value;
    
    cin>> size;
    vector<int>v;
    for(int i=0;i<size;i++){
        cin >> input;
        v.push_back(input);
    }
    cin >>  value;
    cin >>start >> end ;
    v.erase(v.begin()+value-1);
    v.erase(v.begin()+start-1,v.begin()+end-1);
    cout << v.size() << "\n";
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    return 0;
}
