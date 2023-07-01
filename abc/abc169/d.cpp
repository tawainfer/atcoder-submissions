// https://atcoder.jp/contests/abc169/submissions/38880736

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> factorization(ll n) {
  vector<ll> v;
  for (ll i = 2; i * i <= n; i++) {
    if (n == 0) break;

    if (n % i == 0) {
      v.push_back(i);
      n /= i;
      i--;
    }
  }

  if (n > 1) v.push_back(n);
  return v;
}

int main() {
  ll n;
  cin >> n;

  if (n == 1) {
    cout << 0;
    return 0;
  }

  vector<ll> p = factorization(n);
  p.push_back(-1);

  ll ans = 0;
  ll cnt = 0;
  ll t;

  for (int i = 0; i < p.size(); i++) {
    if (i == 0) {
      cnt++;
      t = p[i];
    } else {
      if (t == p[i]) {
        cnt++;
      } else {
        for(int i = 1; i < 1009; i++) {
          if(cnt >= i) {
            ans++;
            cnt -= i;
          }
        }

        cnt = 1;
        t = p[i];
      }
    }
  }

  cout << ans;
  return 0;
}
