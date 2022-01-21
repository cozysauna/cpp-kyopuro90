#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    int A[H][W];
    int B[H][W];
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> B[i][j];
        }
    }
    long long ans = 0;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if((i+1 < H) && (j+1) < W){
                int diff = B[i][j] - A[i][j];
                if (diff != 0){
                    A[i][j] += diff;
                    A[i+1][j] += diff;
                    A[i][j+1] += diff;
                    A[i+1][j+1] += diff;
                    ans += abs(diff);
                }
            }
        }
    }
    bool flag = true;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if(A[i][j] != B[i][j]) flag = false;
        }
    }
    if(flag)
    {
        cout << "Yes" << endl;
        cout << ans << endl;
    } else
    {
        cout << "No" << endl;
    }
    
	return 0;
}
