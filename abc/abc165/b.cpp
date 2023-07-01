// https://atcoder.jp/contests/abc165/submissions/27701692

#include <bits/stdc++.h>
using namespace std;
int main() {
  long long x = 100, X, ans = 0; cin >> X;
    while(x < X) {x = x + x / 100; ans++;}
    cout << ans;
}
