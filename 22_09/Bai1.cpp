#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    long long ans = LLONG_MIN;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        ans = max(ans, x);
    }

    cout << ans;

    return 0;
}