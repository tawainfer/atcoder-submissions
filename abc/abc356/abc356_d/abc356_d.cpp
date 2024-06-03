#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using namespace atcoder;
typedef long long ll;
using mint = modint998244353;

int main() {
  ll n, m;
  cin >> n >> m;

  vector<ll> b = {1};
  for(ll i = 1; i <= 62; i++) {
    b.push_back(b.back() * 2);
  }

  mint ans = 0;
  for(ll i = 1; i <= 62; i++) {
    ll t = n / b[i] + 1;
    ll cnt = b[i] / 2 * t;
    if(n % b[i] < b[i] / 2) cnt -= b[i] / 2;
    else if(n % b[i] < b[i] - 1) cnt -= (b[i] - 1) - (n % b[i]);

    if(m & (1LL << (i - 1))) {
      ans += cnt;
    }
  }

  cout << ans.val();
}