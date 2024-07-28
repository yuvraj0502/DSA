#include<bits/stdc++.h>
using namespace std;

int reverseNumber(int n) {
    int reversedNumber = 0;

    while (n != 0) {
        int digit = n % 10;
        reversedNumber = reversedNumber * 10 + digit;
        n /= 10;
    }

    return reversedNumber;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    int reversed = reverseNumber(number);

    cout << "Reversed Number: " << reversed << endl;

    return 0;
}
