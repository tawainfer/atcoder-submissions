// https://atcoder.jp/contests/abc312/submissions/44198778

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll n, m;
  cin >> n >> m;

  vector<vector<ll>> items(3);
  for(int i = 0; i < n; i++) {
    ll t, x;
    cin >> t >> x;
    items[t].push_back(x);
  }

  for(int i = 0; i < 3; i++) {
    sort(items[i].begin(), items[i].end());
    if(i != 2) reverse(items[i].begin(), items[i].end());
  }

  vector<ll> cum = {0};
  for(ll x : items[0]) {
    cum.push_back(cum.back() + x);
  }

  vector<pair<ll, ll>> cum2; // cost, point
  for(int i = 0; i < 2; i++) cum2.push_back(make_pair(0, 0));

  int cnt = 1;
  for(int i = 0; i < items[1].size(); i++) {
    ll x = items[1][i];
    ll sum = cum2.back().second + x;

    if(items[2].empty()) {
      cum2.push_back(make_pair(INF, sum));
    } else {
      cum2.push_back(make_pair(i + cnt + 1, sum));
      items[2].back()--;
      if(items[2].back() == 0) {
        items[2].pop_back();
        cnt++;
      }
    }
  }

  ll ans = 0;
  for(int i = 0; i <= min((ll)cum.size() - 1, m); i++) {
    ll x = m - i;
    auto iter = upper_bound(cum2.begin(), cum2.end(), make_pair(x + 1, -INF));
    iter--;
    ans = max(ans, cum[i] + (*iter).second);
  }

  cout << ans;
  return 0;
}
