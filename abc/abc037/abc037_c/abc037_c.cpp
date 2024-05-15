#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, k;
  cin >> n >> k;

  vector<ll> a(n + 1);
  for(int i = 1; i <= n; i++) cin >> a[i];

  vector<ll> b(n + 1, 0);
  for(int i = 1; i <= n; i++) b[i] = b[i - 1] + a[i];

  ll i = n;
  ll ans = 0;
  ll cnt = n - k + 1;
  while(cnt--) {
    ans += b[i] - b[i - k];
    i--;
  }

  cout << ans;
  return 0;
}