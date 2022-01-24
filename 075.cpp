#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i = 0; i < ll(n); i++)
#define rep2(i,m,n) for(ll i = m; i < ll(n); i++)
using ll = long long;
const int MOD = 1000000007;

int main() {
    ll N;
    cin >> N;

    ll cnt = 0;
    while(N%2==0){
        cnt++;
        N /= 2;
    }    

    ll now = 3;
    while( now * now <= N){
        if(N%now==0){
            cnt++;
            N/=now;
        }
        else {
            now+=2;
        }
    }

    if(N!=1) cnt++;

    ll ans = 0;
    while(cnt != 1){
        cnt = (cnt+1)/2;
        ans ++;
    }
    cout << ans << endl;

	return 0;
}