#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll n;
  cin >> n;

  vector<ll> a(n);
  for(auto &z : a) cin >> z;

  vector<ll> b0, b1;
  for(int l = 0; l < n; l += 2) {
    int r = l + 1;
    if(r >= n || a[l] != a[r]) {
      b0.push_back(INF);
    } else {
      b0.push_back(a[l]);
    }
  }

  for(int l = 1; l < n; l += 2) {
    int r = l + 1;
    if(r >= n || a[l] != a[r]) {
      b1.push_back(INF);
    } else {
      b1.push_back(a[l]);
    }
  }

  ll ans = 0;

  set<ll> se;
  int l = 0;
  for(int r = 0; r < b0.size(); r++) {
    while(se.find(b0[r]) != se.end()) {
      se.erase(b0[l]);
      l++;
    }

    se.insert(b0[r]);
    if(b0[r] == INF) {
        l += se.size();
        se.clear();
    }

    if(b0[r] != INF) {
      ans = max((r - l + 1) * 2LL, ans);
    }
  }

  set<ll> se2;
  int l2 = 0;
  for(int r2 = 0; r2 < b1.size(); r2++) {
    while(se2.find(b1[r2]) != se2.end()) {
      se2.erase(b1[l2]);
      l2++;
    }

    se2.insert(b1[r2]);
    if(b1[r2] == INF) {
        l2 += se2.size();
        se2.clear();
    }

    if(b1[r2] != INF) {
      ans = max((r2 - l2 + 1) * 2LL, ans);
    }
  }

  cout << ans;
}