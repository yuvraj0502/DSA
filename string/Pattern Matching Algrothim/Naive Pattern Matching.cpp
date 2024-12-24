The Naive Pattern Searching algorithm is a straightforward method to find all 
occurrences of a pattern in a given text. It works by checking the pattern against 
every possible position in the text.

Time Complexity : O(n^2)


#include<bits/stdc++.h>
using namespace std;

void searchPattern(string& text, string& pattern) {
    int textLength = text.length();
    int patternLength = pattern.length();

    for (int i = 0; i <= textLength - patternLength; i++) {
        int j;
        for (j = 0; j < patternLength; j++) {
            if (text[i + j] != pattern[j]) {
                break;  
            }
        }
        if (j == patternLength) {
            cout << "Pattern found at index " << i << endl;  
        }
    }
}

int main() {
    string text = "AABAACAADAABAABA";
    string pattern = "AABA";
    searchPattern(text, pattern);
    return 0;
}


