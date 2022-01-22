#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i = 0; i < ll(n); i++)
using ll = long long;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    vector<int> cnt(N, 0);
    ll ans = 0;
    rep(i, N)
    {
        char e = S[i];
        if( e == 'b') ans += 1LL << i;
        if( e == 'c') ans += 2LL * (1LL << i);
    }
    cout << ans << endl;
	return 0;
}
