#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i = 0; i < ll(n); i++)
#define rep2(i,m,n) for(ll i = m; i < ll(n); i++)
using ll = long long;
const int MOD = 1000000007;

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<ll> A(N);
    vector<ll> M;
    ll ans = 0;
    rep(i, N) cin >> A[i];

    rep(i, N-1) {
        ll l = A[i];
        ll r = A[i+1];
        ans += abs(l-r);
        M.push_back(r-l);
    }

    rep(_, Q){
        int l, r, v;
        cin >> l >> r >> v; l--; r--;
        if(l-1 >= 0){
            ans += abs(M[l-1]+v) - abs(M[l-1]);
            M[l-1] += v;
        }
        if(r<N-1){
            ans += abs(M[r]-v) - abs(M[r]);
            M[r] -= v;
        }
        cout << ans << endl;
    }

	return 0;
}