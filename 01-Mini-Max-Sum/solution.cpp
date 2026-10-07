#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    long long total = 0;
    long long minimum = LLONG_MAX;
    long long maximum = LLONG_MIN;

    for (int i = 0; i < n; ++i) {
        long long x;
        cin >> x;
        total += x;
        minimum = min(minimum, x);
        maximum = max(maximum, x);
    }

    cout << total - maximum << " " << total - minimum << '\\n';

    return 0;
}
