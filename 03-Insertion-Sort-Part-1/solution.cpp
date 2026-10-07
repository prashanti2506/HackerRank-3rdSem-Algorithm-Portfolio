#include <bits/stdc++.h>
using namespace std;

void printArray(const vector<int>& arr) {
    for (int x : arr) {
        cout << x << ' ';
    }
    cout << '\\n';
}

void insertionSort1(int n, vector<int>& arr) {
    int value = arr[n - 1];
    int i = n - 2;

    while (i >= 0 && arr[i] > value) {
        arr[i + 1] = arr[i];
        printArray(arr);
        --i;
    }

    arr[i + 1] = value;
    printArray(arr);
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int& x : arr) {
        cin >> x;
    }

    insertionSort1(n, arr);

    return 0;
}
