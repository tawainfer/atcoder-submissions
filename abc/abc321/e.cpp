// https://atcoder.jp/contests/abc321/submissions/45951984

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 4e18;

int main() {
  ll t;
  cin >> t;

  vector<ll> pow2 = {1};
  for(ll _ = 0; _ <= 60; _++) {
    pow2.push_back(pow2.back() * 2);
  }

  for(ll _= 0; _ < t; _++) {
    ll n, x, k;
    cin >> n >> x >> k;

    vector<ll> ptn = {x};
    while(ptn.back() != 1) {
      ptn.push_back(ptn.back() / 2);
    }
    while(ptn.size() > k + 1) {
      ptn.pop_back();
    }

    ll ans = 0;
    for(ll i = ptn.size() - 1; i >= 0; i--) {
      ll p = (i == 0 ? ptn[i] : ptn[i - 1] + (ptn[i - 1] % 2 == 0 ? 1 : -1));
      ll d = (i == 0 ? i : i + 1);

      if(d > k) {
        ans++;
      } else {
        ll cnt = pow2[k - d];
        ll ep = p;
        bool skip = false;
        for(ll _ = 0; _ < k - d; _++) {
          ep *= 2;
          if(ep > MAX) {
            skip = true;
            break;
          }
        }
        if(skip) continue;
        ep += cnt - 1;

        if(n >= ep) {
          ans += cnt;
        } else {
          ans += max(cnt - (ep - n), 0LL);
        }
      }
    }

    cout << ans << endl;
  }
}
