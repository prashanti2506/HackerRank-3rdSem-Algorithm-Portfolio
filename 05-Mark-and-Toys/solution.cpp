#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long budget;
    cin >> n >> budget;

    vector<long long> prices(n);
    for (long long& price : prices) {
        cin >> price;
    }

    sort(prices.begin(), prices.end());

    int count = 0;

    for (long long price : prices) {
        if (price > budget) {
            break;
        }

        budget -= price;
        ++count;
    }

    cout << count << '\\n';

    return 0;
}
