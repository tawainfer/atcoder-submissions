#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using namespace atcoder;
typedef long long ll;
typedef modint998244353 mint;

int main() {
  ll n, k;
  cin >> n >> k;

  if(n == 1) {
    cout << 1;
    return 0;
  }

  vector<mint> dp = {1};
  for(int i = 1; i <= k; i++) {
    dp.push_back(dp.back() * ((n * n - 2 * (n - 1)) / (mint)(n * n)) + (1 - dp.back()) * (2 / (mint)(n * n)));
  }

  mint ans = dp.back();
  ans += ((1 - dp.back()) / (mint)(n - 1)) * ((n - 1) * (2 + n) / (mint)2);
  cout << ans.val();
}