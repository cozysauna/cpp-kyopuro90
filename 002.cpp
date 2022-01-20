#include <bits/stdc++.h>
using namespace std;
int N;

int main() {
    cin >> N;
    vector<string> ans;
    for(int i = 0; i < (1 << N); i++){
        string tmp = "";
        int L = 0, R = 0;
        bool flag = true;
        for( int j = 0; j < N; j++){
            if((i >> j) & 1){
                tmp += '(';
                L ++;
            } else {
                tmp += ')';
                R ++;
            }
            if (L < R){
                flag = false;
                break;
            }
        }
        if ((L == N/2) && flag){
            ans.push_back(tmp);
        }
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] << endl;
    }

    return 0;
}
