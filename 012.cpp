#include <bits/stdc++.h>
using namespace std;

int H, W, Q;

struct UnionFind {
    vector<int> par;
    int group_cnt;
    UnionFind(int N) : par(N) {
        for(int i = 0; i < N; i++) par[i] = -1;
        group_cnt = N;
    }

	int root(int x){
		if (par[x] < 0) return x;
		return par[x] = root(par[x]);
	}

    bool same(int x, int y){
        return root(x) == root(y);
    }

	void unite(int x, int y){
		int rx = root(x);
		int ry = root(y);
		if (rx == ry) return;
		if (par[rx] > par[rx]) swap(rx, ry);
		par[rx] += par[ry];
		par[ry] = rx;
        group_cnt --;
	}

	int size(int x){
		return -par[root(x)];
	}
};

int getPlaceIdx(int y, int x){
    return W * y + x;
}

int main() {
    cin >> H >> W;
    cin >> Q;
    vector<int> field(H*W, 0);
    UnionFind uni(H*W);
    for (int i = 0; i < Q; i++)
    {
        int t;
        cin >> t;
        if(t == 1)
        {
            int r, c;
            cin >> r >> c; r--; c--;
            field[getPlaceIdx(r, c)] = 1;
            int dy[] = { -1, 0, 0, 1 };
            int dx[] = { 0, -1, 1, 0 };
            for (int j = 0; j < 4; j++)
            {
                int ny = r + dy[j];
                int nx = c + dx[j];
                if(0 <= ny && ny < H && 0 <= nx && nx < W && field[getPlaceIdx(ny, nx)]) {
                    uni.unite(getPlaceIdx(r, c), getPlaceIdx(ny, nx));
                }
            }
            
        } else {
            int ra, ca, rb, cb;
            cin >> ra >> ca >> rb >> cb; ra--; ca--; rb--; cb--;
            if(field[getPlaceIdx(ra, ca)] == 1 && field[getPlaceIdx(rb, cb)] && uni.same(getPlaceIdx(ra, ca), getPlaceIdx(rb, cb))) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }

	return 0;
}
