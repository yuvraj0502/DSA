#include <bits/stdc++.h>
using namespace std;

#define d 256

void searchPattern(char pat[], char txt[], int q)
{
	int ptnLength = strlen(pat);
	int txtLength = strlen(txt);
	int i, j;
	int p = 0; 
	int t = 0; 
	int h = 1;

	
	for (i = 0; i < ptnLength - 1; i++)
		h = (h * d) % q;


	for (i = 0; i < ptnLength; i++) {
		p = (d * p + pat[i]) % q;
		t = (d * t + txt[i]) % q;
	}

	
	for (i = 0; i <= txtLength - ptnLength; i++) {

		
		if (p == t) {
			for (j = 0; j < ptnLength; j++) {
				if (txt[i + j] != pat[j]) {
					break;
				}
			}


			if (j == ptnLength)
				cout << "Pattern found at index " << i
					<< endl;
		}

		
		if (i < txtLength - ptnLength) {
			t = (d * (t - txt[i] * h) + txt[i + ptnLength]) % q;

			
			if (t < 0)
				t = (t + q);
		}
	}
}

int main()
{
	char txt[] = "ABD YJDJ ABEDABYJDAB";
	char pat[] = "AB";

	int q = INT_MAX;

	searchPattern(pat, txt, q);
	return 0;
}

