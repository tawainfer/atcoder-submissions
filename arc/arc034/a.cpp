// https://atcoder.jp/contests/arc034/submissions/30775524

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int a, b, c, d, n;
  double e;
  cin >> n;
  double ans = 0;
  while(cin >> a >> b >> c >> d >> e) {
    
    ans = max(ans, a + b + c + d + e * 110 / 900);
  }
  cout << fixed << setprecision(15) << ans << endl;
}
