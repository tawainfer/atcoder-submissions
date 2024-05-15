#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, a, b;
  cin >> n >> a >> b;

  vector<ll> x(n);;
  for(auto &z : x) cin >> z;

  ll ans = 0;
  for(int i = 1; i < n; i++) {
    ans += min((x[i] - x[i - 1]) * a, b);
  }

  cout << ans;
  return 0;
}