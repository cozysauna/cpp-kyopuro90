#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i = 0; i < ll(n); i++)
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<vector<int> > A(N, vector<int>(N, 0));
    rep(i, N) rep(j, N) cin >> A[i][j];
    int M;
    cin >> M;

    vector<vector<int> > bad(N, vector<int>(N, 0));
    rep(i, M){
        int x, y;
        cin >> x >> y; x--; y--;
        bad[x][y] = 1;
        bad[y][x] = 1;
    }
    vector<int> ord;
    rep(i, N) ord.push_back(i);
    int ans = 1 << 16;
    do 
    {
        bool flag = true;
        int sum = 0;
        rep(i, N-1){
            if(bad[ord[i]][ord[i+1]]) flag = false;
        }
        rep(i, N){
            sum += A[ord[i]][i];
        }
        if(flag) ans = min(ans, sum);

    } while (next_permutation(ord.begin(), ord.end()));
    if(ans == 1 << 16) ans = -1;
    cout << ans << endl;
	return 0;
}
