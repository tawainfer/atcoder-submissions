// https://atcoder.jp/contests/abc284/submissions/37864106

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &z : a) cin >> z;

    int cnt = 0;
    for (auto &z : a) {
      if (z % 2 == 1) cnt++;
    }

    cout << cnt << endl;
  }
}
