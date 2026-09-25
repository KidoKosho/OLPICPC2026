#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n;
    cin >> n;
    
    long long a[n];
    long long max_val = -2e9, ans = -2e9;

    for(int i=0; i<n; i++)
    {
    	cin >> a[i];
    	max_val = max(a[i], max_val + a[i]);
		ans = max(ans, max_val);
	}

	cout << ans;
    
    return 0;
}
