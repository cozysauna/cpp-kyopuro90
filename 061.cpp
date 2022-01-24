#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i = 0; i < ll(n); i++)
#define rep2(i,m,n) for(ll i = m; i < ll(n); i++)
using ll = long long;
const int MOD = 1000000007;

int main() {
    int Q;
    cin >> Q;
    deque<int> que;
    rep(_, Q){
        int t, x;
        cin >> t >> x;
        if(t==1) que.push_front(x);
        else if(t==2) que.push_back(x);
        else cout << que[x-1] << endl;
    }

	return 0;
}