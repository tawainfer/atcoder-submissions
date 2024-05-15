#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  vector<ll> f(n), s(n);
  vector<vector<ll>> a(n + 1);
  for(int i = 0; i < n; i++) {
    cin >> f[i] >> s[i];
    a[f[i]].push_back(s[i]);
  }

  vector<ll> check;
  for(int i = 1; i <= n; i++) {
    sort(a[i].begin(), a[i].end());
    if(!a[i].empty()) check.push_back(a[i].back());
    // for(auto x : check) cout << x << " ";
    // cout << endl;
  }
  sort(check.begin(), check.end());

  ll ans = 0;
  if(check.size() >= 2) ans = check.back() + check[check.size() - 2];

  for(int i = 1; i <= n; i++) {
    if(a[i].size() >= 2) {
      ll s = a[i].back();
      s += a[i][a[i].size() - 2] / 2;
      ans = max(ans, s);
    }
  }

  cout << ans;
  return 0;
}