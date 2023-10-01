// https://atcoder.jp/contests/abc322/submissions/46069400

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, m;
  cin >> n >> m;

  vector<ll> a(m);
  for(auto&z : a) cin >> z;

  for(int i = 1; i <= n; i++) {
    auto iter = lower_bound(a.begin(), a.end(), i);
    cout << (*iter) - i << endl;
  }
}
