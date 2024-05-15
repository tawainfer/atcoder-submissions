#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  vector<ll> a(n), b(n);
  ll sa = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
    sa += a[i];
  }

  ll ans = 0;
  for(int i = 0; i < n; i++) {
    ans = max(ans, sa - a[i] + b[i]);
  }

  cout << ans;
}