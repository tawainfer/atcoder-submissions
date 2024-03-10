// https://atcoder.jp/contests/arc173/submissions/51137895

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

map<pair<ll, ll>, set<ll>> ma;

bool areCollinear(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3) {
  return (y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1);
}

void collinear(ll x1, ll y1, ll i1, ll x2, ll y2, ll i2, ll x3, ll y3, ll i3) {
  bool b = (y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1);
  if(b) {
    double slope = static_cast<double>(y2 - y1) / (x2 - x1);
    double y_intercept = y1 - slope * x1;
    ma[make_pair(slope, y_intercept)].insert(i1);
    ma[make_pair(slope, y_intercept)].insert(i2);
    ma[make_pair(slope, y_intercept)].insert(i3);
  }
}

int main() {
  ll n;
  cin >> n;

  vector<ll> x(n), y(n);
  for(ll i = 0; i < n; i++) {
    ll a, b;
    cin >> a >> b;
    x[i] = a;
    y[i] = b;
  }

  for(ll i = 0; i < n; i++) {
    for(ll j = i + 1; j < n; j++) {
      for(ll k = j + 1; k < n; k++) {
        collinear(x[i], y[i], i, x[j], y[j], j, x[k], y[k], k);
      }
    }
  }

  set<pair<ll, set<ll>>> se;
  for(auto p : ma) {
    se.insert(make_pair(p.second.size(), p.second));
  }

  ll ans = 0;
  set<ll> seen;

  while(!se.empty()) {
    auto iter = se.end();
    iter--;

    auto iter2 = (*iter).second.begin();
    ll a = (*iter2);
    iter2 = (*iter).second.end();
    iter2--;
    ll b = (*iter2);

    bool flag = false;
    for(ll i = 0; i < n; i++) {
      if(i == a || i == b || seen.find(i) != seen.end() || (*iter).second.find(i) != (*iter).second.end()) continue;

      ans++;
      flag = true;
      seen.insert(a);
      seen.insert(b);
      seen.insert(i);

      vector<pair<ll, set<ll>>> t;
      for(auto p : se) {
        t.push_back(p);
      }

      se.clear();
      for(auto p : t) {
        p.second.erase(a);
        p.second.erase(b);
        p.second.erase(i);
        p.first = p.second.size();
        if(p.first >= 3) {
          se.insert(p);
        }
      }
      break;
    }

    if(!flag) {
      auto iter3 = se.end();
      iter3--;
      se.erase(iter3);
    }
  }

  for(ll i = 0; i < n; i++) {
    for(ll j = i + 1; j < n; j++) {
      for(ll k = j + 1; k < n; k++) {
        if(seen.find(i) != seen.end()) continue;
        if(seen.find(j) != seen.end()) continue;
        if(seen.find(k) != seen.end()) continue;
        if(areCollinear(x[i], y[i], x[j], y[j], x[k], y[k])) continue;

        seen.insert(i);
        seen.insert(j);
        seen.insert(k);
        ans++;
      }
    }
  }

  cout << ans;
}
