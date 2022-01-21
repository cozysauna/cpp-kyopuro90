#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    vector<long long> dp(8);
    dp[0] = 1;
    string atcoder = "atcoder";
    for (int i = 0; i < N; i++)
    {
        char e = S[i];
        for (int j = 0; j < 7; j++)
        {
            if (e == atcoder[j]){
                dp[j+1] += dp[j];
                dp[j+1] %= MOD;
            }
        }
    }

    cout << dp[7] << endl;
	return 0;
}
