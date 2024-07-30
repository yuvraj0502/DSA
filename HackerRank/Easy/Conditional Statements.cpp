#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    int number;
      string a[11]={"Greater than 9","one","two","three","four","five","six","seven","eight","nine"};
      cin>>number;
      if(number>9){
          cout<<a[0];
      }
      else{
          cout<<a[number];
      }

    return 0;
}

