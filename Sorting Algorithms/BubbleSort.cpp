//! reapetedly swap two adjacent element if they are in wrong order
//! Time complexity =  O(n^2)


#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;

    cout << "Enter a size of array: ";
    cin >> size;

    int arr[size];

    for(int i=0;i<size;i++){
        cin >> arr[i];
    }

    bool swap;
    for(int i=0;i<size-1;i++){
        swap=false;
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap=true;
            }
        }
        if(!swap){
            break;
        }
    }

    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }

    return 0;
}

//! or

#include<bits/stdc++.h>
using namespace std;

int main(){

    int size;

    cout <<  "Enter a size of array: ";
    cin >> size;

    int arr[size];

    for(int i=0;i<size;i++){
        cin >> arr[i];
    }

    int pointer=1;
    while(pointer<size-1){
        for(int i=0;i<size-pointer;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        pointer++;
    }


    cout << "sorted array" << endl;

    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }

    return 0;
}




