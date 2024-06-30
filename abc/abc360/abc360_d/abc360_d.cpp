#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll n, t;
  cin >> n >> t;

  string s;
  cin >> s;

  vector<ll> x(n);
  for(auto &z : x) cin >> z;

  vector<ll> plus, minus;
  for(int i = 0; i < n; i++) {
    if(s[i] == '1') {
      plus.push_back(x[i]);
    } else if(s[i] == '0') {
      minus.push_back(x[i]);
    }
  }
  sort(plus.begin(), plus.end());
  sort(minus.begin(), minus.end());
  // plus.push_back(INF);
  minus.push_back(INF);
  // for(auto x : plus) cout << x << " ";
  // cout << endl;
  // for(auto x : minus) cout << x << " ";
  // cout << endl;

  ll ans = 0;
  for(auto p : plus) {
    auto si = lower_bound(minus.begin(), minus.end(), p);
    auto ei = lower_bound(minus.begin(), minus.end(), p + 2 * t + 1);
    ans += distance(si, ei);
    // cout << ans << endl;
  }

  // for(auto p : plus) {
  //   auto si = lower_bound(minus.begin(), minus.end(), p);
  //   auto ei = upper_bound(minus.begin(), minus.end(), p + 2 * t);
  //   ans += distance(si, ei);
  //   cout << ans << endl;
  // }

  cout << ans;
}