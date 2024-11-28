Two Dimensional Array (or 2D Array):

A two-dimensional array in C++ is a collection of elements organized in rows and columns 
It can be visualized as a table or a grid, where each element is accessed using two 
indices: one for the row and one for the column. Like a one-dimensional array, 
two-dimensional array indices also range from 0 to n-1 for both rows and columns.


data_Type array_name[n][m];
    Where,
        n: Number of rows.
        m: Number of columns.

We can declare a 2D array statically and dynamically. In static declaration, memory is 
allocated during compile time, and in dynamic memory is allocated during runtime. The 
above is the syntax for the static declaration of a 2D array. To know how to declare the 
2d array dynamically, refer to this article.

Initialization of Two-Dimensional Arrays in C++
Different ways to initialize a 2D array are given below:

Using Initializer List
Using Loops
1. Initialize 2D array using the Initializer list

We can initialize a 2D array using an initializer list in two ways. Below is the first 
method of initializing a 2D array using an initializer list.

First Method: The below array has 2 rows and 4 columns. The elements are filled in a 
way that the first 4 elements are filled in the first row and the next 4 elements are 
filled in the second row.

int arr[2][4] = {0, 1, 2, 3, 4, 5, 6, 7};
Second Method: The below way is the cleaner way to initialize a 2D array the nested 
list represents the elements in a row and the number of elements inside it is equal to 
the number of columns in a 2D array. The number of nested lists represents the number of 
columns.

int x[2][4] = {{0, 1, 2, 3}, {4, 5, 6, 7}};
2. Initialization of 2D array using Loops
We can also initialize 2D array using loops. To initialize 2D array we have to use two 
nested loops and nested loops are equal to the dimension. For example, to initialize a 
3D array we have to use three nested loops. Let`s see an example.

Example: In the below example we have initializes the 2D array with 1. The outer loop is 
used to track rows “i=0” means the first row because of 0 indexing similarly “j=0” means 
the first column and combining this x [0][0] represents the first cell of the 2D array.

int x[2][4];
for(int i = 0; i < 2; i++){
    for(int j = 0; j < 4; j++){
        x[i][j] = 1;
    }
}
Accessing Elements of Two-Dimensional Arrays in C++
We can access the elements of a 2-dimensional array using row and column indices. It is 
similar to matrix element position but the only difference is that here indexing starts 
from 0.

Syntax:

array_name[i][j];
where,

i: Index of row.
j: Index of the column.
Example: Below is the index of elements of the second row and third column.

int x[1][2];


Example of 2D array 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][4];
    int count=1;

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            arr[i][j]=count;
            count++;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

outPut: 
1 2 3 4 
5 6 7 8 
9 10 11 12 


In the above code we have initialized the count by '1' and declared a 2D array with 
3 rows and 4 columns after that we initialized the array with the value of count and 
increment value of count in every iteration of the loop. Then we are printing the 2D 
array using a nested loop and we can see in the below output that there are 3 rows and 
4 columns.

Time Complexity: O(n*m)
Space Complexity:O(n*m)

where n is the number of rows and m is the number of columns.






