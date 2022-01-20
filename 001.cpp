#include <bits/stdc++.h>
using namespace std;

long long N, K, L;
long long A[1 << 18];

bool ok(long long mid){
    long long cnt = 0, pre = 0;
    for (int i = 0; i <= N; i++){
        if (A[i] - pre >= mid){
            cnt ++;
            pre = A[i];
        }
    }
    return cnt >= K + 1;
}

int main() {
    cin >> N >> L;
    cin >> K;
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    A[N] = L;
    long long bottom = 0, top = L;
    while (top - bottom > 1) {
        long long mid = (top + bottom) / 2 ;
        if (ok(mid)) bottom = mid ;
        else top = mid;
    }

    cout << bottom << endl;
	return 0;
}
