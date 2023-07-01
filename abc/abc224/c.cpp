// https://atcoder.jp/contests/abc224/submissions/30738977

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll n;
  cin >> n;
  vector<ll> x(n), y(n);
  for(int i = 0; i < n; i++) cin >> x[i] >> y[i];

  ll ans = 0;
  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
      for(int k = j + 1; k < n; k++) {
        if ((x[k] - x[i]) * (y[j] - y[i]) - (x[j] - x[i]) * (y[k] - y[i])) {
          ans++;
        }
      }
    }
  }
  cout << ans;
}
