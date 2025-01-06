// Given n number of sorted files,the task is to find the minimum computations done to 
// reach optimal pattern.
// When two or more sorted files are to be 
// merged, the minimum computations are done by merging the two smallest files first.
// The greedy choice is to merge the two smallest files of the sorted files.
// The optimal pattern is to merge the two smallest files first.
// Time Complexity: O(nlogn)

#include <bits/stdc++.h>
using namespace std;

int minComputation(int size, int files[]) {
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < size; i++) {
        pq.push(files[i]);
    }
    int count = 0;
    while (pq.size() > 1) {
        int first_smallest = pq.top();
        pq.pop();
        int second_smallest = pq.top();
        pq.pop();
        int temp = first_smallest + second_smallest;
        count += temp;
        pq.push(temp);
    }
    return count;
}


