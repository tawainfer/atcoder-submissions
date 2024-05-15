#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, m;
  cin >> n >> m;

  vector<set<ll>> g(n + 1);
  map<pair<ll, ll>, ll> ma;
  set<pair<ll, ll>> se;
  for(int i = 0; i < m; i++) {
    ll a, b, c;
    cin >> a >> b >> c;
    ma[make_pair(a, b)] = c;
    ma[make_pair(b, a)] = c;
    se.insert(make_pair(a, b));
    se.insert(make_pair(b, a));
  }

  vector<ll> ptn;
  for(int i = 1; i <= n; i++) ptn.push_back(i);

  ll ans = 0;
  do {
    ll cmax = 0;
    ll cnt = 0;
    for(int i = 1; i < ptn.size(); i++) {
      if(se.find(make_pair(ptn[i - 1], ptn[i])) != se.end()) {
        cnt += ma[make_pair(ptn[i - 1], ptn[i])];
      } else {
        cmax = max(cmax, cnt);
        cnt = 0;
      }
    }

    cmax = max(cmax, cnt);
    ans = max(ans, cmax);
  } while(next_permutation(ptn.begin(), ptn.end()));

  cout << ans;
  return 0;
}