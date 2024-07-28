#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cout << "Enter a number of size vector: ";
    cin >> n;

    vector<int>v[n];

    for(int i=0;i<n;i++){
        int element;
        cout << "insert the number of element in particular vector: ";
        cin >> element;

        for(int j=0;j<element;j++){
            int value;
            cin >> value;

            v[i].push_back(value);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<v[i].size();j++){
            cout << v[i][j] << " "; 
        }
        cout << endl;
    }

    return 0;
}