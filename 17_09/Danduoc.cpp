#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,a,b;
    cin >> m >> n >> a >> b;
    long long solve = 0;
    for(long long i=0;i<=1;++i){
        if(m>=3*i*n){
            long long tong = i*b + (m-3*i*n)/(2*n)*a;
            solve = max(solve,tong);
        }
    }
    for(int i=0;i<=2;++i){
        if(m>=2*i*n){
            long long tong = i*a + (m-2*i*n)/(3*n)*b;
            solve = max(solve,tong);
        }
    }
    cout << solve;