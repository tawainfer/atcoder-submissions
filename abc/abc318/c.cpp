// https://atcoder.jp/contests/abc318/submissions/45145279

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, d, p;
  cin >> n >> d >> p;

  vector<ll> a(n);
  for(auto &z : a) cin >> z;
  sort(a.begin(), a.end());

  ll ans = 0;
  while(!a.empty()) {
    ll sum = 0;
    for(int i = 0; i < d; i++) {
      if(a.empty()) break;
      sum += a.back();
      a.pop_back();
    }

    ans += min(p, sum);
  }

  cout << ans;
  return 0;
}
