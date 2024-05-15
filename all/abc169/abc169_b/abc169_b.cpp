#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

ll mul(ll a, ll b) {
  ll INF = 1LL << 60;
  if(a == 0) return 0;
  if(INF / a < b) return INF;
  return min(INF, a * b);
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll ans = 1, ma = 1e18, n;
  cin >> n;
  while(cin >> n) ans = mul(ans, n);

  if(ma < ans) cout << -1;
  else cout << ans;
}