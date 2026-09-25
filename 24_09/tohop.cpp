#include<stdio.h>
#include<string.h>
long long t[1000003];
long long p[1000003];
long long power_mod(long long a, long long b, long long M){
    long long res = 1;
    a %= M;
    while(b){
        if(b&1) res = res*a%M;
        b >>=1;
        a = a*a%M;
    }
    return res;
}

long long modulo_inverse(int a, int M){
	return power_mod(a,M-2,M);
}
int main(){
	p[0]=t[0]=1;
	p[1]=t[1]=1;
	long long MOD=1e9+7;
	for(int i=2;i<=1000002;++i){
		t[i]=t[i-1]*i%MOD ;
		p[i]=modulo_inverse(t[i],MOD);
	}
	int n;
	scanf("%d",&n);
	while(n--){
		int a,b;
		scanf("%d%d",&a,&b);
		printf("%lld\n",t[a]*p[b]%MOD*p[a-b]%MOD);
	}
	
}