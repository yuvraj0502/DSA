Three-Dimensional Array(3D Array):

The 3D array is a data structure that stores elements in a three-dimensional 
cuboid-like structure. It can be visualized as a collection of multiple two-dimensional 
arrays stacked on top of each other. Each element in a 3D array is identified by its 
three indices: the row index, column index, and depth index.



Declaration of Three-Dimensional Array
To declare a 3D array in C++, we need to specify its third dimension along with 2D 
dimensions.

Syntax:

dataType arrayName[d][r];
dataType: Type of data to be stored in each element.
arrayName: Name of the array
d: Number of 2D arrays or Depth of array.
r: Number of rows in each 2D array.
c: Number of columns in each 2D array.
Example:

int array[3][5][2];
Initialization of Three-Dimensional Array in C++
To initialize the 3D array in C++, we follow the same methods we have used to initialize 
the 2D array. In 3D array, we have one more dimension so we have to add one more nested 
list of elements.

A 3D array in C can be initialized by using:

Initializer List
Loops
Initialization of 3D Array using Initializer List

Method 1: In this method, we have to write the total number of elements inside curly 
braces, and each item is placed at its position according to the dimension given.

int x[3][5][2] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 
                  10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
                  20, 21, 22, 23, 24, 25, 26, 27, 28, 30};
Method 2 (Better):  In this method, we have partitioned the elements using nested lists 
and it is easy to read.

int x[3][5][2] = { 
                     { {0, 1}, {2, 3}, {4, 5}, {6, 7}, {8, 9} }, 
                     { {10, 11}, {12, 13}, {14, 15}, {16, 17}, {18, 19} },
                     { {20, 21}, {22, 23}, {24, 25}, {26, 27}, {28, 30} },
                 };
Initialization of 3D Array using Loops

This method is the same as initializing a 2D array using loops with one more nested 
loop for the third dimension.

int x[3][5][2];
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
        for (int k = 0; k < 2; k++) {
            x[i][j][k] = (some_value);
        }
    }
}


Accessing elements in Three-Dimensional Array 
Accessing elements in 3D arrays is as simple as accessing elements in 2D arrays. 
Here what we have to do extra work is adding one more nested loop to keep track of 
the third dimension.


#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[2][2][3];
    int count=1;

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<3;k++){
                arr[i][j][k]=count;
                count++;
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<3;k++){
                printf("x[%d][%d][%d] = %d \n", i, j, k, 
                       x[i][j][k]); 
                       count++;
            }
        }
    }
    return 0;
}

outPut:

x[0][0][0] = 0 
x[0][0][1] = 1 
x[0][0][2] = 2 
x[0][1][0] = 3 
x[0][1][1] = 4 
x[0][1][2] = 5 
x[1][0][0] = 6 
x[1][0][1] = 7 
x[1][0][2] = 8 
x[1][1][0] = 9 
x[1][1][1] = 10 
x[1][1][2] = 11 


