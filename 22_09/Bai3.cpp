#include<iostream>
#include<cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    long long tong = 0;
    int a[n];
    for(auto &x : a) {
        cin >> x;
        tong += x;
    }
    unsigned long sum1 =0,sum2=0;
    for(int i=0;i<n;++i){
        if(a[i] %2 ==0){
            unsigned long long p =0;
            int k =a[i];
            while(k%2==0){
                p++;
                k/=2;
            }
            sum1 += p*(tong - a[i]);
        }
        if(a[i]%5==0){
            unsigned long long p =0;
            int k = a[i];
            while(k%5==0){
                p++;
                k/=5;
            }
            sum2 += p*(tong - a[i]);
        }
    }
    cout << min(sum1,sum2);
}