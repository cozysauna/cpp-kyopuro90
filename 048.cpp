#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> cost;
    for (int i = 0; i < N; i++)
    {
        int a, b;
        cin >> a >> b;
        cost.push_back(a-b);
        cost.push_back(b);
    }
    sort(cost.begin(), cost.end(), greater<int>());
    long long ans = 0;
    for (int i = 0; i < K; i++)
    {
        ans += cost[i];
    }
    
    cout << ans << endl;
	return 0;
}
