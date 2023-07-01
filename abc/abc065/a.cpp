// https://atcoder.jp/contests/abc065/submissions/26616083

#include <bits/stdc++.h>
using namespace std;
int main() {
  long long x, a, b;
  cin >> x >> a >> b;
    if (b - a <= 0) cout << "delicious";
    else if(b - a <= x) cout << "safe";
    else cout << "dangerous";
}
