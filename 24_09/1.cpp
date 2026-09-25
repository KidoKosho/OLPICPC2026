#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;

long long powMod(long long a, long long b, long long M){
    long long res = 1;
    a%=M;
    while(b){
        if(b%2==1) res = res*a%M;
        b/=2;
        a=a*a%M;
    }
    return res;
}
long long phiEuler(long long n){
    long long x = n;
    for(int i=2;i*i<=n;++i){
        if(n%i==0){
            while(n%i==0) n/=i;
            x = x - x/i;
        }
    }
    if(n>1) x= x-x/n;
    return x;
}
//b^c mod (M-1)
int main(){
    int t;cin >> t;
    while(t--){
        long long a,b,c;
        cin >> a >> b >> c;
        long long k = powMod(b,c,MOD-1);
        cout << powMod(a,k,MOD) << endl;
    }
}