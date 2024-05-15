#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  ll ans = 0;
  set<ll> ptn;
  for(ll i = 1; i * i <= 2 * n; i++) {
    if(2 * n % i == 0) {
      ptn.insert(i);
      ptn.insert(2 * n / i);
    }
  }

  for(auto &d : ptn) if(d % 2 != 2 * n / d % 2) ans++;
  cout << ans;
  return 0;
}