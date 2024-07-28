#include<iostream>
using namespace std;

int main(){
    int number ;

    cout << "Enter a number would check even or odd: ";
    cin >> number;

    if(number%2==0){
        cout << "Given number is Even : " << number;
    }else{
        cout << "Given number is Odd :" << number;
    }

    return 0;
}