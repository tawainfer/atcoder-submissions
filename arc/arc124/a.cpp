// https://atcoder.jp/contests/arc124/submissions/30382762

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll N, K;
  cin >> N >> K;
  vector<ll> a(N, 0);
  vector<ll> b(N, 0);
  for(int i = 0; i < K; i++) {
    char c;
    ll k;
    cin >> c >> k;
    k--;
    b[k] = 1;
    for(ll j = 0; j < N; j++) {
      if(c == 'L' && k <= j) a[j]++;
      if(c == 'R' && j <= k) a[j]++;
    }
  }
  const ll MOD = 998244353;
  ll ans = 1;
  for(ll i = 0; i < N; i++)
    if(!b[i]) ans = ans * a[i] % MOD;
  cout << ans << "\n";
  return 0;
}
