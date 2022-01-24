#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i = 0; i < ll(n); i++)
#define rep2(i,m,n) for(ll i = m; i < ll(n); i++)
using ll = long long;
const int MOD = 1000000007;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> cnt(N);
    rep(i, M){
        int a, b;
        cin >> a >> b; a--; b--;
        cnt[max(a, b)]++;
    }
    int ans = 0;
    rep(i, N){
        if(cnt[i] == 1) ans++;
    }
    cout << ans << endl;
	return 0;
}