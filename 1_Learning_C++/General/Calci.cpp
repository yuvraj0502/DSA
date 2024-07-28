#include<iostream>
using namespace std;

void calsi(){
    double number1;
    double number2;

    char operation;
    bool continueCalsi = true;
    char useChoice;

    while (continueCalsi){

        cout << "Enter a fist number: ";
        cin >> number1;

        cout << "Enter operation (+, -, *, /): ";
        cin >> operation;

        cout << "Enter a second number: ";
        cin >> number2;

        switch (operation){
            case '+':
                cout << "Given number sum Here: " << number1 + number2 << endl; 
                break;


            case '-':
                cout << "Given number subtration Here: " << number1 - number2 << endl; 
                break;


            case '*':
                cout << "Given number multipation Here: " << number1 * number2 << endl; 
                break;


            case '/':
                if(number2 ==0){
                    cout << "Plz number2 must be non zero: " << endl;
                    
                }else{
                    cout << "Given number divide Here: " << number1/number2 << endl;
                }
                break;
        
            default:
                cout << "Invalid operaion" << endl;
                break;
        }

        cout << "Do you want other operaion ? (y/n): ";
        cin >> useChoice;

        if(useChoice == 'n' || useChoice == 'N'){
            continueCalsi = false;
            cout << "Thank You";
        }

    }
    

}

int main(){
   calsi();
   return 0;
}