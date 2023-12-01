#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int findMinimumOfMaxSums(int arr[], int n) {
    vector<int> result;

    int i = 0;
    int suma = 0;
    int sumb = 0;
    int sumf = 0;


q 
    for (int i = 0; i < n-1; i++) { // Correct the loop variable to start from 0
            suma += arr[i];
            for (int j = i + 1; j < n; j++) { // Correct the loop variable to start from i+1, exceeding i
                sumb += arr[j];
            }

        int maxSum = max(suma, sumb);
        result.push_back(maxSum);
    }

    int minOfMaxSums = INT_MAX;
    for (int num : result) {
        if (num < minOfMaxSums)
            minOfMaxSums = num;
    }

    return minOfMaxSums;
}

int main() {
    int n = 4;
    int arr[] = {10, 20, 30, 40};

    int result = findMinimumOfMaxSums(arr, n);

    cout << "Minimum value among all possible sums of two subarrays: " << result << endl;

    return 0;
}
