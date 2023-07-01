// https://atcoder.jp/contests/agc024/submissions/30379303

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll a, b, c, k; cin >> a >> b >> c >> k;
  if(abs(a - b) > 1e18) {
    cout << "Unfair";
    return 0;
  }
  if(k % 2 == 0) cout << a - b;
  else cout << -(a - b);
}
