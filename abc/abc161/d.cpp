// https://atcoder.jp/contests/abc161/submissions/42742678

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void dfs(string s, ll n, set<ll> &l) {
  if(s.size() == n) {
    l.insert(stoll(s));
    return;
  }

  ll last = (ll)(s.back() - 48);
  for(ll i = last - 1; i <= last + 1; i++) {
    if(0 <= i && i <= 9) {
      dfs(s + to_string(i), n, l);
    }
  }
}

int main() {
  ll k;
  cin >> k;

  set<ll> lunlun;
  for(ll i = 1; i <= 9; i++) lunlun.insert(i);
  
  for(ll i = 1; i <= 9; i++) {
    for(ll j = 2; j <= 10; j++) {
      dfs(to_string(i), j, lunlun);
    }
  }

  ll ans = -1;
  while(k--) {
    ans = *lunlun.begin();
    lunlun.erase(lunlun.begin());
  }

  cout << ans;
  return 0;
}
