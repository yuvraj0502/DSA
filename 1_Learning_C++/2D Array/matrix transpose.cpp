

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

    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i]=temp;
        }
    }
    
    cout << endl;
    cout << "Transpose Matrix";
    cout << endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}