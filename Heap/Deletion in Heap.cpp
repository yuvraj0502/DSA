// -> The standard deletion operation on heap is to delete the element present at the 
//    root element of the heap.

// -> That is if it is a max heap,the standard deletion operation will delete the 
//    maximum element and if it is a min heap, the standard deletion operation
//    will delete the minimum element.

// -> The standard deletion operation can be performed in the following steps:
//     1. Replace the root of the heap with the last element on the last level.
//     2. Remove the last element from the last level.
//     3. Compare the new root with its children; if they are in the correct order, 
//         stop.
//     4. If not, swap the element with one of its children and return to the 
//         previous step.

// Time Complexity : O(log n)


#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int root){
    int largest = root; 
	int left = 2 * root + 1; 
	int right = 2 * root + 2; 

	if (left < n && arr[left] > arr[largest])
		largest = left;

	if (right < n && arr[right] > arr[largest])
		largest = right;

	if (largest != root) {
		swap(arr[root], arr[largest]);
		heapify(arr, n, largest);
	}
}
	


void deleteRoot(int arr[], int& n)
{
	int lastElement = arr[n - 1];
	arr[0] = lastElement;
	n--;
	heapify(arr, n, 0);
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}

int main()
{
	
	int arr[] = { 10, 5, 3, 2, 4 };

	int n = sizeof(arr) / sizeof(arr[0]);

	deleteRoot(arr, n);

	printArray(arr, n);

	return 0;
}
