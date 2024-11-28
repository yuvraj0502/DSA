An array is data sturucture used to store the collection of the same data type.
Array is one-dimensional or multi-dimensinal based on the number of directions in which 
the array is grow.


MultiDimensinal array is an array with more then one dimenson.It is the homogeneous 
collection of items where each element is accessed using multiple indices.

Multidimensional Array Declaration:
datatype arrayName[size1][size2]...[sizeN];
   where,

    datatype: Type of data to be stored in the array.
    arrayName: Name of the array.
    size1, size2,…, sizeN: Size of each dimension.

Two dimensional array: int two_d[2][4];
Three dimensional array: int three_d[2][4][8];


size of multidimensinal array:
The size of an array is equal to the size of the data type multiplied by the total number 
of elements that can be stored in an array. We can calculate the total number of elements 
in an array by multiplying the size of each dimension of a multidimensional array.

Example:
int arr1[2][4];
The array int arr1[2][4] can store total (2*4) = 8 elements.
In c++ int data type takes 4 bytes and we have 8 elements in the array there why 
arr1 size is = 8(element size) * 4(int data type ) = 32 bytes.

int arr2[2][4][8];
Array int arr2[2][4][8] can store total (2*4*8) = 64 elements.
The Total size of ‘arr2‘ = 64*4 = 256 bytes.
