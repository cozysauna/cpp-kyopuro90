#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i = 0; i < ll(n); i++)
#define rep2(i,m,n) for(ll i = m; i < ll(n); i++)
using ll = long long;
const int MOD = 1000000007;

int main() {
    int K;
    cin >> K;
    if(K % 9){
        cout << 0 << endl;
        return 0;
    }
    int ans = 0;
    vector<int> dp(K+1, 0);
    dp[0] = 1;
    rep(i, K){
        rep2(j, 1, 10){
            if(i+j > K) continue;
            dp[i+j] += dp[i];
            dp[i+j] %= MOD;
        }
    }
    cout << dp[K] << endl;
	return 0;
}
