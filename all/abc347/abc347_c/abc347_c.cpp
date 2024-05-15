#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, a, b;
  cin >> n >> a >> b;
  ll m = a + b;

  vector<ll> d(n);
  for(auto &z : d) cin >> z;

  set<ll> se;
  for(auto x : d) {
    se.insert(x % m);
  }
  // for(auto x : se) cout << x << " ";

  vector<ll> t;
  for(auto x : se) {
    t.push_back(x);
    t.push_back(x + m);
    t.push_back(x + 2 * m);
  }
  sort(t.begin(), t.end());

  for(int i = 1; i < t.size(); i++) {
    if(t[i] - t[i - 1] > b) {
      cout << "Yes";
      return 0;
    }
  }

  cout << "No";
}