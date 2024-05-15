#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll n, k;
  cin >> n >> k;

  map<ll, ll> m;
  int a, b;
  while(cin >> a >> b) m[a] += b;
  
  vector<pair<ll, ll>> p;
  p.push_back(make_pair(0, INF));
  for(auto z : m) {
    p.push_back(make_pair(z.first, z.second));
  }
  sort(p.begin(), p.end());

  for(int i = p.size() - 2; i >= 0; i--) {
    p[i].second += p[i + 1].second;
  }
  p.push_back(make_pair(INF, -INF));

  // for(auto z : p) {
  //   cout << z.first << " " << z.second << endl;
  // }

  for(int i = 1; i < p.size(); i++) {
    if(p[i].second <= k) {
      cout << p[i - 1].first + 1;
      return 0;
    }
  }
}