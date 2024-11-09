#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll n, m;
  cin >> n >> m;

  vector<ll> x(m), a(m);
  for(auto &z : x) cin >> z;
  for(auto &z : a) cin >> z;
  
  vector<pair<ll, ll>> v;
  for(int i = 0; i < m; i++) {
    v.push_back(make_pair(x[i], a[i]));
  }
  sort(v.begin(), v.end());
  // v.push_back(make_pair(INF, 0));

  if(v[v.size() - 1].first != n) {
    v.push_back(make_pair(n, 0));
  }

  if(v[0].first != 1) {
    cout << -1;
    return 0;
  }

  ll ans = 0;
  // ll lp;
  for(int i = 0; i < v.size() - 1; i++) {
    // if(i == v.size() - 2) {
    //   lp = v[i].first + v[i].second - 1;
    // }

    if(v[i].second < v[i + 1].first - v[i].first) {
      cout << -1;
      return 0;
    }
    // cout << "i=" << i << endl;

    if(v[i].second == v[i + 1].first - v[i].first) {
      // cout << "p1\n";
      ans += (v[i].second - 1) * (1 + v[i].second - 1) / 2;
    } else {
            // cout << "p2\n";
      ans += (v[i + 1].first - v[i].first - 1) * (1 + (v[i + 1].first - v[i].first - 1)) / 2;
      ans += (v[i + 1].first - v[i].first) * (v[i].second - (v[i + 1].first - v[i].first));
      v[i + 1].second += v[i].second - (v[i + 1].first - v[i].first);
    }
    // cout << ans << endl;
  }

  if(v[v.size() - 1].second != 1) {
    cout << -1;
    return 0;
  }

  cout << ans;
}