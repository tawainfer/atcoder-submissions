// https://atcoder.jp/contests/abc209/submissions/30716804

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll n, mod = 1000000007; cin >> n;
  vector<ll> c(n);
  for(auto& z : c) cin >> z;
  sort(all(c));

  ll ans = 0;
  for(int i = 0; i < n; i++) {
    if(c[i] - i > 0) {
      if(ans == 0) ans += c[i] - i;
      else ans *= (c[i] - i);
      ans %= mod;
    } else {
      cout << 0;
      return 0;
    }
  }
  cout << ans;
}
