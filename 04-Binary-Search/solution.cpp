#include <bits/stdc++.h>
using namespace std;

int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = static_cast<int>(arr.size()) - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int n, target;
    cin >> n;

    vector<int> arr(n);
    for (int& x : arr) {
        cin >> x;
    }

    cin >> target;

    cout << binarySearch(arr, target) << '\\n';

    return 0;
}
