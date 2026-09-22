#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    map<int,int> mp;
    long long res = 0;
    int max_idx = 0;
    for(int i=1;i<=n;++i){
        int x;cin >> x;
        int idx = mp[x];
        max_idx = max(max_idx,idx);
        res += i-max_idx;
        mp[x] = i;
    }
    cout << res;
    return 0;
}