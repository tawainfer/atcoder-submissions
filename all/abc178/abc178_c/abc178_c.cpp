#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  typedef long long ll;
  ll mod = 1e9 + 7;

  ll n;
  cin >> n;

  vector<ll> x = {1, 1, 1};
  for(int i = 0; i < n; i++) for(int j = 0; j < 3; j++) {
    x[j] *= (10 - j);
    x[j] %= mod;
  }

  ll ans = x[0] - x[1] - x[1] + x[2];
  while(ans < 0) ans += mod;

  cout << ans;
  return 0;
}