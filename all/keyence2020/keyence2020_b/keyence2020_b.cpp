#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  ll n;
  cin >> n;

  vector<ll> x(n), l(n);
  vector<pair<ll, ll>> p;
  for(int i = 0; i < n; i++) {
    cin >> x[i] >> l[i];
    p.push_back(make_pair(x[i] + l[i], x[i] - l[i]));
  }
  sort(p.begin(), p.end());

  ll ans = 0;
  ll last = -1e18;
  for(auto &z : p) {
    if(last <= z.second) {
      ans++;
      last = z.first;
    }
    // cout << z.first << " " << last << " " << ans << endl;
  }

  cout << ans;
  return 0;
}