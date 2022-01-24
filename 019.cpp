#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i = 0; i < ll(n); i++)
#define rep2(i,m,n) for(ll i = m; i < ll(n); i++)
using ll = long long;
const int MOD = 1000000007;
const long long INF = 1 << 30;

int main() {
    int N;
    cin >> N;
    vector<int> A(2*N+1);
    rep(i, 2*N) cin >> A[i+1];
    vector<vector<ll> > dp(2*N+1, vector<ll>(2*N+1, INF));
    rep(i, 2*N) dp[i][i+1] = abs(A[i]-A[i+1]);
    for(int w = 1; w < 2*N+100; w+=2){
        for (int l = 1; l < 2*N+1; l++)
        {
            int r = w+l;
            if(r>2*N) break;
            dp[l][r] = min(dp[l][r], dp[l+1][r-1] +abs(A[l]-A[r]));
            for (int k = l+1; k < r-1; k++) dp[l][r] = min(dp[l][r], dp[l][k]+dp[k+1][r]);
        }
    }
    cout << dp[1][2*N] << endl;

	return 0;
}