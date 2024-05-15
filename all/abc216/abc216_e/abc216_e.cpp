#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll sum(ll a, ll n) {
  ll l = a - n + 1;
  return n * (a + l) / 2;
}

int main() {
  ll n, k;
  cin >> n >> k;

  vector<pair<ll, ll>> d = {make_pair(0, 1)};
  for(int _ = 0; _ < n; _++) {
    ll a;
    cin >> a;
    d.push_back(make_pair(a, 1));
  }
  sort(d.begin(), d.end());

  ll ans = 0;
  while(d.size() >= 2 && k > 0) {
    if(d.back().first == 0) break;
    
    ll ck = min(k, (d.back().first - d[d.size() - 2].first) * d.back().second);
    ans += sum(d.back().first, ck / d.back().second) * d.back().second;
    ans += (d.back().first - ck / d.back().second) * (ck % d.back().second);
    k -= ck;

    d[d.size() - 2].second += d.back().second;
    d.pop_back();
  }

  cout << ans;
  return 0;
}