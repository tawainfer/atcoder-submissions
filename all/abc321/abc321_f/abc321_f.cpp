#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 998244353;
const ll INF = 2e18;

int main() {
  ll q, k;
  cin >> q >> k;

  vector<ll> cnt(2 * k + 1, INF);
  cnt[0] = 1;

  for(int _ = 0; _ < q; _++) {
    char c;
    ll x;
    cin >> c >> x;

    if(c == '+') {
      for(int i = k; i >= 0; i--) {
        if(i - x < 0) break;
        if(cnt[i - x] != INF) {
          if(cnt[i] == INF) cnt[i] = 0;
          cnt[i] += cnt[i - x];
          cnt[i] %= MOD;
        }
      }
    } else {
      for(int i = 0; i <= k; i++) {
        if(i + x > k) break;
        if(cnt[i] == INF) continue;
        if(cnt[i] > 0) {
          cnt[i + x] -= cnt[i];
          cnt[i + x] += MOD * 2;
          cnt[i + x] %= MOD;
          if(cnt[i + x] == 0) cnt[i + x] = INF;
        }
      }
    }

    if(cnt[k] == INF) cout << 0 << endl;
    else cout << cnt[k] % MOD << endl;
  }
}