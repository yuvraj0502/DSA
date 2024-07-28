

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1;
    int n2;
    int n3;
    
    cout << "Enter a first matrix row: ";
    cin >> n1;

    cout << "Enter a first matrix column: ";
    cin >> n2;

    cout << "Enter a second matrix row: ";
    cin >> n2;

    cout << "Enter a second matrix column: ";
    cin >> n3;



    int a[n1][n2];
    int b[n2][n3];

    cout << endl;
    cout << "Enter a first matrix element : " << endl;
    cout << endl;

    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cin >> a[i][j];
        }
    }

    cout << endl;
    cout << "Enter a second matrix element : " << endl;
    cout << endl;

    for(int i=0;i<n2;i++){
        for(int j=0;j<n3;j++){
            cin >> b[i][j];
        }
    }

   
    int ans[n1][n3];

    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            ans[i][j]=0;
        }
    }
    

    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            for(int k=0;k<n2;k++){
                ans[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "Multiplication Matrix" << endl;
    cout << endl;

    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
   
}