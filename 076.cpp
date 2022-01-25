#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i = 0; i < ll(n); i++)
#define rep2(i,m,n) for(ll i = m; i < ll(n); i++)
using ll = long long;
const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, N) cin >> A[i];
    deque<int> que;
    ll sA = 0;
    rep(i, N) sA += A[i];
    ll total = 0;
    int now = 0;
    bool flag = false;
    while(now!=2*N) {
        if(que.empty()) {
            que.push_back(A[now%N]);
            total += A[now%N];
            now ++;
        } else {
            if(10*total > sA) {
                int e = que.front();
                que.pop_front();
                total -= e;
            } else {
                que.push_back(A[now%N]);
                total += A[now%N];
                now ++;
            }
        }
        if(total * 10 == sA) {
            flag = true;
            break;
        }
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;


	return 0;
}