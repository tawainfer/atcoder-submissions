#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  typedef long long ll;
  ll mod = 1e9 + 7;
  
  ll n, p;
  cin >> n >> p;

  ll ans = 1;
  ll x = n - 1;
  ll sum = p - 2;

  while(x > 0) {
    if(x & 1) {
      ans *= sum;
      ans %= mod;
    }

    sum *= sum;
    sum %= mod;
    x >>= 1;
  }

  ans = ans * (p - 1) % mod;
  cout << ans;
  return 0;
}