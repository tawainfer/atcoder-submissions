#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  map<ll, ll> m;
  vector<ll> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    m[a[i]] = i;
  }
  
  vector<vector<ll>> ans;
  for(ll i = 0; i < n; i++) {
    if(m[i + 1] != i) {
      ans.push_back({min(i, m[i + 1]), max(i, m[i + 1])});
      m[a[i]] = m[i + 1];
      swap(a[i], a[m[i + 1]]);
      m[i + 1] = i;
    }
  }

  cout << ans.size() << endl;
  for(auto v : ans) {
    cout << v[0] + 1 << " " << v[1] + 1 << endl;
  }
}