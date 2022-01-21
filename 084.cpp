#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    vector<int> A(N);
    vector<int> B(N);
    int a = N, b = N;
    for (int i = N-1; i >= 0; i--)
    {
        if(S[i] == 'o') a = i;
        else b = i;
        A[i] = a;
        B[i] = b;
    }
    long long ans = 0;
    for (int i = 0; i < N; i++)
    {
        if(S[i] == 'o')
        {
            ans += N - B[i];
        } else {
            ans += N - A[i];
        }
    }
    cout << ans << endl;
	return 0;
}
