#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>v;

    v.push_back({10,34,213});
    v.push_back({3});

    for(int i=0;i<v.size();i++){
        for(auto it=v[i].begin();it<v[i].end();it++){
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}