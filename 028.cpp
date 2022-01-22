#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i = 0; i < ll(n); i++)
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<vector<int> > field(1010, vector<int>(1010, 0));
    rep(i, N)
    {
        int lx, ly, rx, ry;
        cin >> lx >> ly >> rx >> ry;
        field[ly][lx]++;
        field[ry][lx]--;
        field[ly][rx]--;
        field[ry][rx]++;
    }
    rep(x, 1001) rep(y, 1001) field[x+1][y] += field[x][y];
    rep(x, 1001) rep(y, 1001) field[x][y+1] += field[x][y];

    vector<int> A(N+1);
    rep(i, 1001) rep(j, 1001) A[field[i][j]]++;
    for (int i = 1; i < N+1; i++) cout << A[i] << endl;

	return 0;
}