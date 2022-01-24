#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i = 0; i < ll(n); i++)
#define rep2(i,m,n) for(ll i = m; i < ll(n); i++)
using ll = long long;
const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;
    vector<int> M(101, 0);
    vector<int> L(N);
    vector<int> R(N);
    rep(i, N) cin >> L[i] >> R[i];
    double ans = 0;
    rep(i, N) {
        rep2(j, i+1, N) {
            int li = L[i], ri = R[i];
            int lj = L[j], rj = R[j];
            double tmp = 0.0;
            rep2(ii, li, ri+1){
                rep2(jj, lj, rj+1){
                    if(ii>jj) tmp++;
                }
            }
            ans += tmp/((ri-li+1)*(rj-lj+1));
        }
    }
    printf("%.10f\n", ans);
	return 0;
}