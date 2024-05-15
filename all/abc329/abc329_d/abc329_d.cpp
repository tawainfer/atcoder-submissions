#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, m;
  cin >> n >> m;

  vector<ll> a(m);
  for(auto &z : a) cin >> z;

  vector<ll> cnt(n + 1, 0);
  set<pair<ll, ll>> se; // vaule, idx
  
  for(int i = 0; i < m; i++) {
    cnt[a[i]]++;
  }

  for(int i = 1; i <= n; i++) {
    se.insert(make_pair(cnt[i], -i));
  }

  vector<ll> ans;
  for(int i = m - 1; i >= 0; i--) {
    auto iter = se.end();
    iter--;

    int v = (*iter).first;
    int p = -((*iter).second);
    ans.push_back(p);

    se.insert(make_pair(cnt[a[i]] - 1, -a[i]));
    se.erase(make_pair(cnt[a[i]], -a[i]));
    cnt[a[i]]--;
  }

  reverse(ans.begin(), ans.end());
  for(auto x : ans) {
    cout << x << endl;
  }
}