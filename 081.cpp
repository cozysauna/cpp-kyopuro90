#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < int(n); i++)
using ll = long long;

int main() {
    int N, K;
    cin >> N >> K;
    vector<vector<int> > field(5050, vector<int>(5050, 0));
    rep(i, N)
    {
        int a, b;
        cin >> a >> b;
        field[a][b]++;   
    }
    
    rep(i, 5001) rep(j, 5001) field[i][j+1] += field[i][j];
    rep(i, 5001) rep(j, 5001) field[i+1][j] += field[i][j];
    int ans = 0;
    for(int al = 0; al < 5001; al++)
    {
        for(int bl = 0; bl < 5001; bl++)
        {   
            int ar = min(5000, al+K);
            int br = min(5000, bl+K);
            int tmp = field[ar][br];
            bool alflag = al > 0;
            bool blflag = bl > 0;
            if(alflag && blflag) tmp += field[al-1][bl-1];
            if(alflag) tmp -= field[al-1][br];
            if(blflag) tmp -= field[ar][bl-1];
            ans = max(ans, tmp);
        }
    }

    cout << ans << endl;
	return 0;
}
