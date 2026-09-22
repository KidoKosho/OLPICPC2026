#include<bits/stdc++.h>
using namespace std;
#define MAX 300300
long long BIT[MAX]={0};
int n;
void update(int idx,int val){
    for(; idx <= n; idx += idx&-idx){
        BIT[idx] += val;
    }
}
long long query(int idx){
    long long res = 0;
    for(;idx>0;idx -= idx&-idx) res+= BIT[idx];
    return res;
}
long long query(int l,int r){
    return query(r) - query(l-1);
}
int main(){
    int q;
    cin >> n >> q;
    int a[n+1]={0};
    for(int i = 1 ;i <= n;++i){
        cin >> a[i];
        update(i,a[i]);
    }
    while(q--){
        int type, l , r;
        cin >> type >> l >> r;
        if(type == 1){
            update(l,r-a[l]);
            a[l] = r;
        }
        else cout << query(l,r) << endl;
    }
 
}