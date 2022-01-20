#include <bits/stdc++.h>
using namespace std;
int N, Q;
vector<int> A(1);
vector<int> B(1);

int main() {
    cin >> N;
    int suma = 0, sumb = 0;
    for(int i = 0; i < N; i++){
        int c, p; 
        cin >> c >> p;
        if(c == 1)suma += p;
        else sumb += p;
        A.push_back(suma);
        B.push_back(sumb);
    }
    cin >> Q;
    for(int i = 0; i < Q; i++){
        int l, r;
        cin >> l >> r;
        cout << A[r] - A[l-1] << " " << B[r] - B[l-1] << endl;
    }
	return 0;
}