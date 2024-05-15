#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a, b, c, d; cin >> a >> b >> c >> d;
    long long x = a, y = 0;
    for(int i = 1; i <= a; i++) {
        x += b;
        y += c;
        if(x<=y*d){cout << i; return 0;}
    }
    cout << -1;
}
