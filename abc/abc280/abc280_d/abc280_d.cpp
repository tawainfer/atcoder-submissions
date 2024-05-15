#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool prime_check = true;
ll etc = -1;

void prime_fact(ll x, vector<ll> &cnt) {
  ll t = x;
  for(ll i = 2; i * i <= t; i++) {
    while(x > 1 && x % i == 0) {
      prime_check = false;
      cnt[i]++;
      x /= i;
    }
  }

  if(x != 1) {
    etc = x;
  }
}

ll perm_sum(ll n, ll l) {
  return n * (1 + l) / 2;
}

int main() {
  ll k;
  cin >> k;

  vector<ll> cnt(1000009, 0);
  prime_fact(k, cnt);

  if(prime_check) {
    cout << k;
    return 0;
  }

  if(etc != -1) {
    cout << etc;
    return 0;
  }

  ll ans = 1;
  for(ll i = 2; i * i <= k; i++) {
    if(cnt[i] == 0) continue;

    vector<ll> pow = {1};
    while(pow.back() <= 1e18) pow.push_back(pow.back() * i);
    
    // ll ng = -1;
    // ll ok = 1e9;

    // while(ok - ng > 1) {
    //   ll mid = (ok + ng) / 2;
    //   if(cnt[i] <= perm_sum(mid, mid)) ok = mid;
    //   else ng = mid;
    // }

    ll j = i;
    ll sum = 0;
    // cout << cnt[i] << "\n";

    while(j * j <= k) {
      ll d;
      for(int t = 2; t <= pow.size(); t++) {
        if(j % pow[t] != 0) {
          d = t - 1;
          break;
        }
      }

      sum += d;
      // cout << j << " " << d << " " << sum << endl;

      if(cnt[i] <= sum) break;
      j += i;
    }

    ans = max(ans, j);
    // cout << i << " " << ans << endl;
  }

  cout << ans;
  return 0;
}