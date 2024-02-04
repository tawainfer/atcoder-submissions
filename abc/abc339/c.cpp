// https://atcoder.jp/contests/abc339/submissions/49923153

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  vector<ll> a(n);
  for(auto &z : a) cin >> z;

  ll need = 0;
  ll sum = 0;
  for(auto x : a) {
    sum += x;
    need = min(need, sum);
  }

  need = -need;
  ll ans = need;
  for(auto x : a) {
    ans += x;
  }

  cout << ans;
}
