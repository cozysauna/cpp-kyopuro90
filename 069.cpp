#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i = 0; i < ll(n); i++)
#define rep2(i,m,n) for(ll i = m; i < ll(n); i++)
using ll = long long;
const int MOD = 1000000007;

ll modpow(ll x, ll y, ll MOD){
    if(y==0) return 1;
    ll tmp = modpow(x, y/2, MOD);
    if(y%2==1) return x % MOD * tmp % MOD * tmp % MOD;
    return tmp % MOD * tmp % MOD;
}

int main() {
    ll N, K;
    cin >> N >> K;
    ll ans = K % MOD;
    if(N>1){
        ans *= K-1;
        ans %= MOD;
    }
    if(N>2){
        ans *= modpow(K-2, N-2, MOD);
        ans %= MOD;
    }
    cout << ans % MOD << endl;
	return 0;
}