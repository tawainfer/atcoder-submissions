#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll n;
  cin >> n;

  vector<vector<ll>> v;
  for(int i = 0; i < n; i++) {
    ll a, c;
    cin >> a >> c;
    v.push_back({a, c, i + 1});
  }
  sort(v.begin(), v.end());
  reverse(v.begin(), v.end());

  ll t1 = INF;
  ll t2 = v[0][1];
  for(int i = 1; i < n; i++) {
    if(v[i - 1][0] == v[i][0]) continue;
    t1 = min(t1, t2);
    t2 = min(t2, v[i][1]);
    if(v[i][1] > t2) {
      v[i][2] = -1;
    }
  }

  // for(auto p : v) {
  //   for(auto x : p) {
  //     cout << x << " ";
  //   }
  //   cout << endl;
  // }

  set<int> se;
  for(int i = 0; i < n; i++) {
    if(v[i][2] != -1) {
      se.insert(v[i][2]);
    }
  }

  cout << se.size() << endl;
  for(auto x : se) cout << x << " ";
}