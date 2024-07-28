 

#include<iostream>
using namespace std;

int main(){

    int size;
    int sum=0;
    

    cout << "Enter a number of size array: ";
    cin >> size;

    int arr[size];
    int max= INT16_MIN;
    int min= INT16_MAX;
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "Sum of array:";

    for(int i=0;i<size;i++){
        sum += arr[i];
    }
    cout << sum << endl;
    
    cout << "Largest number: ";
    for(int i=0;i<size;i++){
        if(arr[i]>max){
           max=arr[i];
        }
    }
    cout << max << endl;

    cout << "Smallest number: ";
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout << min << endl;

    cout << "Given array Mean:";
    double mean = static_cast<double>(sum) / n;
    cout << mean << endl;
   
   
    return 0;
}