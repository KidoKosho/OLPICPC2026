#include<stdio.h>
int main(){
    long long y;
    scanf("%lld",&y);
    while(y--){
        long long x,MOD=(1e9+7);
        scanf("%lld",&x);
        x%=MOD;
        long long du=166666668;//du = 6^-1 % mod
        printf("%lld\n",(du*x)%MOD*(x+1)%MOD*(x+2)%MOD);
    }
}