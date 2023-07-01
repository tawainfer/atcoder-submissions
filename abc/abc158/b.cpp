// https://atcoder.jp/contests/abc158/submissions/28646904

#include <bits/stdc++.h>
using namespace std;
int main() {
  unsigned long long n, a, b, ans = 0; cin >> n >> a >> b;
  ans += n / (a + b) * a;
  if(n % (a + b) < a) ans += n % (a + b);
  else ans += a;
  cout << ans;
}
