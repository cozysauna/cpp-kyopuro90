#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i = 0; i < ll(n); i++)
#define rep2(i,m,n) for(ll i = m; i < ll(n); i++)
using ll = long long;
const int MOD = 1000000007;

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> A(N);
    rep(i, N) cin >> A[i];
    int cnt = 0;
    rep(_, Q){
        int t, x, y;
        cin >> t >> x >> y; x--; y--;
        if(t==1) swap(A[(x-cnt+N)%N], A[(y-cnt+N)%N]);
        else if(t==2) {
            cnt++;
            cnt %= N;
        }
        else cout << A[(x-cnt+N)%N] << endl;
    }

	return 0;
}