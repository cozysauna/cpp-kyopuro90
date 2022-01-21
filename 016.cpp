#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, A, B, C;
    long long ans = 1 << 18;
    cin >> N;
    cin >> A >> B >> C;
    for(int i = 0; i < 10000; ++i)
    {
        for(int j = 0; j < 10000; ++j)
        {
            long long  now = i * A + j * B;
            if(N<now) break;
            if((N-now)%C==0) 
            {
                long long tmp = (N-now)/C + i + j; 
                if(ans > tmp) ans = tmp;
            }
        }
    }
    cout << ans << endl;
	return 0;
}
