#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;

int main() {
    int N, L;
    cin >> N >> L;
    vector<int> A(N+1, 0);
    A[0] = 1;
    for (int i = 0; i < N+1; i++)
    {
        A[i+1] += A[i];
        A[i+1] %= MOD;
        if((i+L) <= N)
        {
            A[i+L] += A[i];
            A[i+L] %= MOD;
        }
    }
    cout << A[N] << endl;
	return 0;
}
