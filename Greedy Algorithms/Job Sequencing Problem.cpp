// Given an  array of jobs where every job has a deadline and associated profit if the job 
// is finished before the deadline.It is also given that every job taken a single unit time
// so the minimum possible deadline for any job is 1.Maximize the total profit if only
// one job can be scheduled at a time.

// Time Complexity : O(nlogn)

#include <bits/stdc++.h>
using namespace std;

struct Job {
    char id;       
    int profit;    
    int deadline;  
};

bool cmd(Job a, Job b) {
    return (a.profit > b.profit);
}

void printJobScheduling(Job arr[], int n) {
    sort(arr, arr + n, cmd);

    vector<bool> slot(n, false); 
    vector<char> result(n, 0);   

    for (int i = 0; i < n; i++) {
        for (int j = min(n - 1, arr[i].deadline - 1); j >= 0; j--) {
            if (!slot[j]) {
                slot[j] = true;    
                result[j] = arr[i].id; 
                break;
            }
        }
    }

    cout << "Scheduled jobs: ";
    for (int i = 0; i < n; i++) {
        if (result[i] != 0) {
            cout << result[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    Job arr[] = {
        {'1', 35, 4},
        {'2', 30, 4},
        {'3', 25, 4},
        {'4', 20, 2},
        {'5', 15, 3},
        {'6', 12, 1},
        {'7', 5, 2}};
    int n = sizeof(arr) / sizeof(arr[0]);
    printJobScheduling(arr, n);
    return 0;
}
