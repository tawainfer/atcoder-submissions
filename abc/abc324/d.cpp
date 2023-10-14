// https://atcoder.jp/contests/abc324/submissions/46586726

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  string s;
  cin >> s;

  vector<ll> cnt(10, 0);
  for(auto c : s) {
    cnt[c - 48]++;
  }

  ll ans = 0;
  for(ll x = 0; x <= 10000000; x++) {
    if(1) {
      string t = to_string(x * x);
      vector<ll> cnt2(10, 0);
      for(auto c : t) {
        cnt2[c - 48]++;
      }

      bool b = true;
      for(ll i = 1; i <= 9; i++) {
        if(cnt[i] != cnt2[i]) {
          b = false;
          break;
        }
      }

      if(b && s.size() >= t.size()) {
        ans++;
      }
    }
  }

  cout << ans;
  return 0;
}
