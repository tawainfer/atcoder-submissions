// https://atcoder.jp/contests/arc129/submissions/41987519

#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
  int n;
  cin >> n;

  int bl = -INF;
  int br = INF;

  int l, r;
  while(cin >> l >> r) {
    bl = max(bl, l);
    br = min(br, r);
    cout << max((bl - br + 1) / 2, 0) << endl;
  }
}
