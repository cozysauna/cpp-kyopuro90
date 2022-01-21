#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
// const int MOD = 998244353;

int main() {
    int N;
    cin >> N;
    long long ans = 1;
    for (int i = 0; i < N; i++)
    {
        long long sum = 0;
        for (int j = 0; j < 6; j++) {
            int a;
            cin >> a;
            sum += a;
        }
        sum %= MOD;
        ans *= sum;
        ans %= MOD;
    }
    cout << ans << endl;
	return 0;
}
