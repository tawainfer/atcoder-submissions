// https://atcoder.jp/contests/abc156/submissions/44839229

#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using namespace atcoder;
using mint = modint1000000007;
typedef long long ll;
const ll MOD = 1000000007;

mint ncr(int n, int r) {
  mint u = 1;
  for(int i = 0; i < r; i++) {
    u *= (n - i);
  }

  mint d = 1;
  for(int i = 1; i <= r; i++) {
    d *= i;
  }

  return u / d;
}

int main() {
  ll n, a, b;
  cin >> n >> a >> b;

  vector<ll> pow2 = {2};
  for(int i = 0; i < 30; i++) pow2.push_back(pow2.back() * pow2.back() % MOD);

  ll ans = 1;
  for(int i = 0; i < 30; i++) {
    if(n & (1 << i)) {
      ans *= pow2[i];
      ans %= MOD;
    }
  }

  mint mans = ans;
  mans -= ncr(n, a);
  mans -= ncr(n, b);
  mans--;
  cout << mans.val();
  return 0;
}
