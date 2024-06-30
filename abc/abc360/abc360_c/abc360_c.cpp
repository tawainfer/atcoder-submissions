#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll n;
  cin >> n;

  vector<ll> a(n);
  for(auto &z : a) cin >> z;

  vector<ll> w(n);
  for(auto &z : w) cin >> z;

  vector<vector<ll>> buf(n + 1);
  for(int i = 0; i < n; i++) {
    buf[a[i]].push_back(w[i]);
  }

  ll ans = 0;
  for(int i = 0; i < buf.size(); i++) {
    if(buf[i].size() >= 2) {
      sort(buf[i].begin(), buf[i].end());
      // reverse(buf[i].begin(), buf[i].end());
      buf[i].pop_back();
      while(buf[i].size() >= 1) {
        ans += buf[i].back();
        buf[i].pop_back();
      }
    }
  }

  cout << ans;
}