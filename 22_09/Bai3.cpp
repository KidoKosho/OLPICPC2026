#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    long long tong = 0,solve = LLONG_MIN,min_array =0;
    for(int i=0;i<n;++i){
        int x;
        cin >> x;
        tong += x;
        solve = max(tong-min_array,solve);
        min_array = min(tong,min_array);
    }
    cout << solve;
    return 0;
}