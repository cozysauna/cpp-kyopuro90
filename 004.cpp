#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    int A[H][W];
    int B[H][W];
    int row[H];
    int col[W];

    for (int i = 0; i < H; i++) row[i] = 0;

    for (int j = 0; j < W; j++) col[j] = 0;

    for (int i = 0; i < H; i++){
        for (int j = 0; j < W; j++){
            cin >> A[i][j];
            row[i] += A[i][j];
            col[j] += A[i][j];
            B[i][j] = 0;
        }
    }

    for (int i = 0; i < H; i++ ){
        for (int j = 0; j < W; j++){
            B[i][j] = row[i] + col[j] - A[i][j];
        }
    }

    for (int i = 0; i < H; i++){
        for (int j = 0; j < W; j++){
            if ( j == 0){
                cout << B[i][j];
            } else {
                cout << " " << B[i][j];
            }
        }
        cout << endl;
    }

	return 0;
}