#include<bits/stdc++.h>
using namespace std;

int main(){
   int size;


   cout << "Enter a number of size: ";
   cin >> size;


   vector<int>numbers;
   int value;

   for(int i=0;i<size;i++){
      cout << "Enter a value" << " " << i << ": " ;
      cin >> value;
      numbers.push_back(value);
   }

   for(auto i=numbers.begin();i<numbers.end();i++){
    cout << *i << " " ;
   }
   
   cout << endl;
   cout << "Pop element :" << endl;
   numbers.pop_back();
   for(auto i=numbers.begin();i<numbers.end();i++){
    cout << *i << " ";
   }

   cout << endl;
   cout << "Insert element :" << endl;
   int insert;
   cin  >> insert;
   numbers.insert(numbers.begin()+1,insert);
   for(auto i=numbers.begin();i<numbers.end();i++){
    cout << *i << " ";
   }
   

   cout << endl;
   numbers.erase(numbers.end());
   for(auto i=numbers.begin();i<numbers.end();i++){
    cout << *i << " ";
   }

    return 0;
}