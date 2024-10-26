#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, m;
  cin >> n >> m;

  set<pair<ll, ll>> se;
  for(int i = 0; i < m; i++) {
    ll a, b;
    cin >> a >> b;
    se.insert(make_pair(a, b));
    se.insert(make_pair(a + 2, b + 1));
    se.insert(make_pair(a + 1, b + 2));
    se.insert(make_pair(a - 1, b + 2));
    se.insert(make_pair(a - 2, b + 1));
    se.insert(make_pair(a - 2, b - 1));
    se.insert(make_pair(a - 1, b - 2));
    se.insert(make_pair(a + 1, b - 2));
    se.insert(make_pair(a + 2, b - 1));
  }

  ll ans = n * n;
  for(auto p : se) {
    if(p.first < 1 || p.first > n || p.second < 1 || p.second > n) continue;
    ans--;
  }

  cout << ans;
}