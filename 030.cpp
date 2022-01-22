#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K; cin >> N >> K;
    vector<long long> c(N+1);
    c[0] = 1;
    for (int i = 2; i < N+1; i++)
    {
        if(c[i] != 0) continue;
        int now = i;
        while(now <= N){
            c[now]++;
            now += i;
        }
    }
    long long ans = 0;
    for (int i = 2; i < N+1; i++)
    {
        if(c[i] >= K) ++ans;
    }
    
    cout << ans << endl;
	return 0;
}
