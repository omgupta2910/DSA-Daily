#include <iostream>
#include <vector>

using namespace std;

double find_min_x(vector<int> arr) {
    int n = arr.size();
    double x = 1; // initialize x as 1
    double sum = x;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum < 1) {
            x = 1 - sum;
            sum = 1;
        }
    }
    return x;
}

int main() {
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    double min_x = find_min_x(arr);
    cout << "Minimum value of x: " << min_x << endl;
    return 0;
}
