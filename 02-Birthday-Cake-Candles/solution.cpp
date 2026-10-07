#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long maximum = LLONG_MIN;
    int count = 0;

    for (int i = 0; i < n; ++i) {
        long long height;
        cin >> height;

        if (height > maximum) {
            maximum = height;
            count = 1;
        } else if (height == maximum) {
            ++count;
        }
    }

    cout << count << '\\n';

    return 0;
}
