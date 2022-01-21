#include <bits/stdc++.h>
using namespace std;

long long gcd(long long x, long long y){
    if(x == 0) return y;
    return gcd(y%x, x);
}

int main() {
    long long a, b, c, g;
    cin >> a >> b >> c;
    g = gcd(gcd(a, b), c);
    cout << (a+b+c) / g - 3 << endl;
	return 0;
}
