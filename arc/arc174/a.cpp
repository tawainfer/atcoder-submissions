// https://atcoder.jp/contests/arc174/submissions/51393965

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, c;
  cin >> n >> c;

  vector<ll> a(n + 1, 0);
  vector<ll> b(n + 1, 0);
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
    b[i] = a[i];
  }

  for(int i = 1; i < b.size(); i++) {
    b[i] += b[i - 1];
  }

  ll ans = 0;
  ll mi = 0;
  ll ma = 0;

  if(c > 0) {
    for(int i = 1; i <= n; i++) {
      ans = max(ans, b[i] - mi);
      mi = min(mi, b[i]);
    }
  } else {
    for(int i = 1; i <= n; i++) {
      ans = min(ans, b[i] - ma);
      ma = max(ma, b[i]);
    }
  }

  ll s = 0;
  for(auto x : a) {
    s += x;
  }

  if(c == 0) {
    cout << s - ans;
    return 0;
  }

  if(c > 0) {
    cout << s + ans * (c - 1);
  } else {
    cout << s + ans * (c - 1);
  }
}
