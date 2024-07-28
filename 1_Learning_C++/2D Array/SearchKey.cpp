

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int m;

    cout << "Enter a row size: ";
    cin >> n;

    cout << "Enter a column size: ";
    cin >> m;

    int a[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }

    int value;
    cout << "Find value: ";
    cin >> value;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==value){
                cout << "Element found " << i << " row " << j << " column";
            }
        }
    }

    cout << "Element not Found";
    return 0;
}