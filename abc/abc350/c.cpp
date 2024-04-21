// https://atcoder.jp/contests/abc350/submissions/52572863

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  map<ll, ll> m; // idx, pos
  vector<ll> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    m[a[i]] = i;
  }
  
  vector<vector<ll>> ans;
  for(ll i = 0; i < n; i++) {
    if(m[i + 1] != i) {
      // cout << min(i, m[i + 1]) << " " << max(i, m[i + 1]) << endl;
      ans.push_back({min(i, m[i + 1]), max(i, m[i + 1])});
      // int t = m[a[i]];
      // m[a[i]] = m[i + 1];
      // swap(m[a[i]], m[i + 1]);
      m[a[i]] = m[i + 1];
      swap(a[i], a[m[i + 1]]);
      m[i + 1] = i;
    }

    // for(auto x : a) {
    //   cout << x << " ";
    // }
    // cout << endl;
  }

  cout << ans.size() << endl;
  for(auto v : ans) {
    cout << v[0] + 1 << " " << v[1] + 1 << endl;
  }
}
