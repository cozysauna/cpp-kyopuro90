#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i = 0; i < ll(n); i++)
#define rep2(i,m,n) for(ll i = m; i < ll(n); i++)
using ll = long long;
const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;
    vector<ll> X(N), Y(N), sX(N), sY(N);
    rep(i, N){
        int x, y;
        cin >> x >> y;
        X[i] = x;
        sX[i] = x;
        Y[i] = y;
        sY[i] = y;
    }

    sort(sX.begin(), sX.end());
    sort(sY.begin(), sY.end());
    ll ans = 0;
    rep(i, N){
        int l = X[i];
        int r = Y[i];
        ans += abs(l-sX[N/2]) + abs(r-sY[N/2]);
    }
    cout << ans << endl;

	return 0;
}