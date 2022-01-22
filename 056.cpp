#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i = 0; i < ll(n); i++)
using ll = long long;

int main() {
    int N, S;
    cin >> N >> S;
    vector<vector<int> > dp(N+1, vector<int>(S+1, 0));
    dp[0][0] = 1;
    vector<int> A(N);
    vector<int> B(N);
    rep(i, N)
    {
        int a, b;
        cin >> a >> b;
        A[i] = a;
        B[i] = b;
        rep(j, S+1)
        {
            if(dp[i][j])
            {
                if(j+a <= S) dp[i+1][j+a] = 1;
                if(j+b <= S) dp[i+1][j+b] = 1;
            }
        }
    }
    if (dp[N][S] == 0) cout << "Impossible" << endl;
    else 
    {
        int now = S;
        vector<char> ans;
        for (int i = N-1; i >= 0; i--)
        {
            if(now - A[i] >= 0 && dp[i][now-A[i]] == 1)
            {
                now -= A[i];
                ans.push_back('A');
            } else {
                now -= B[i];
                ans.push_back('B');
            }
        }
        reverse(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++)
        {
            if(i == ans.size()-1) 
            {
                cout << ans[i] << endl;
            } else 
            {
                cout << ans[i] << "";
            }

        } 
    }
	return 0;
}
