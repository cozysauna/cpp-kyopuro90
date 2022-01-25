#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i = 0; i < ll(n); i++)
#define rep2(i,m,n) for(ll i = m; i < ll(n); i++)
using ll = long long;
const int MOD = 1000000007;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    rep(i, N) cin >> A[i];
    deque<int> que;
    int ans = 0;
    int now = 0;
    int cnt = 0;
    map<ll, int> done;
    while(now < N){
        if(cnt <= K || que.empty()) {
            int a = A[now];
            que.push_back(a);
            done[a]++;
            if(done[a] == 1) cnt++;
            now++;
        } else {
            int a = que.front();
            que.pop_front();
            done[a]--;
            if(done[a] == 0) cnt--;
        }
        if(cnt <= K){
            int s = que.size();
            ans = max(ans, s);
        }
    }
    cout << ans << endl;
	return 0;
}