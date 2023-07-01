// https://atcoder.jp/contests/abc249/submissions/41642680

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  vector<ll> cnt(200009, 0);
  vector<ll> a(n);
  for(auto &z : a) {
    cin >> z;
    cnt[z]++;
  }
  sort(a.begin(), a.end());

  set<ll> seen;
  ll ans = 0;

  for(ll i : a) {
    if(seen.find(i) != seen.end()) continue;
    seen.insert(i);

    for(ll j = 1; j * j <= i; j++) {
      if(i % j == 0) {
        ans += cnt[i] * cnt[j] * cnt[i / j];
        // cout << i << " " << j << " " << i / j << " " << ans << endl;
        
        if(j * j != i) {
          ans += cnt[i] * cnt[i / j] * cnt[j];
          // cout << i << " " << i / j << " " << j << " " << ans << endl;
        }
      }
    }
  }

  cout << ans;
  return 0;
}
