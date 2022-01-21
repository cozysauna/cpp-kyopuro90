#include <bits/stdc++.h>
using namespace std;

vector<long long> divs(long long n){
    vector<long long> ret;
    for (long long i = 1; i * i <= n; i++)
    {
        if (n%i == 0) 
        {
            ret.push_back(i);
            if (i * i != n) ret.push_back(n/i);
        }
    }
    sort(ret.begin(), ret.end());
    return ret;
}

int main() {
    long long K;
    cin >> K;
    vector<long long> divisors = divs(K);
    long long ans = 0;
    for (int i = 0; i < divisors.size(); i++)
    {
        for (int j = i; j < divisors.size(); j++)
        {
            long long a = divisors[i];
            long long b = divisors[j];
            long long tmp = K / a;
            if(tmp % b) continue;
            tmp /= b;
            if (b <= tmp) ans ++;
        }
    }
    cout << ans << endl;

	return 0;
}
