#include <bits/stdc++.h>
using namespace std;
int N, Q;
vector<int> A;

bool ok(int mid, int b){
    return A[mid] <= b;
}

void solve(int b){
    int bot = 0, top = N;
    while((top - bot) > 1){
        int mid = (top+bot)/2;
        if (ok(mid, b)) bot = mid;
        else top = mid;
    }
    cout << min(abs(A[bot]-b), abs(A[top]-b)) << endl;
}

int main() {
    cin >> N;
    for(int i = 0; i < N; i++){
        int a;
        cin >> a;
        A.push_back(a);
    }
    sort(A.begin(), A.end());
    cin >> Q;
    for(int i = 0; i < Q; i++){
        int b;
        cin >> b;
        solve(b);
    }
	return 0;
}
