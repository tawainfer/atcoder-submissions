// https://atcoder.jp/contests/abc328/submissions/47466083

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, q;
  cin >> n >> q;

  string s;
  cin >> s;

  vector<int> a(n + 1, 0);
  for(int i = 1; i < n; i++) {
    if(s[i - 1] == s[i]) {
      a[i + 1]++;
    }
  }

  vector<int> b(n + 1, 0);
  for(int i = 1; i <= n; i++) {
    b[i] = b[i - 1] + a[i];
  }

  for(int i = 0; i < q; i++) {
    int l, r;
    cin >> l >> r;

    cout << b[r] - b[l] << endl;
  }
}
