#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  ll mod = 1e9 + 7;
  ll x, y;
  cin >> x >> y;

  ll a = 1;
  ll b = 1;

  for(int i = (x + y); i > (x + y) - min(x, y); i--) {
    a *= i;
    a %= mod;
  }

  for(int i = 1; i <= min(x, y); i++) {
    b *= i;
    b %= mod;
  }

  ll n = b;
  ll s = 1;
  for(int i = 0; i < 30; i++) {
    if((mod - 2) & (1 << i)) s *= n;
    s %= mod;
    n *= n;
    n %= mod;
  }

  cout << (a * s) % mod;
  return 0;
}