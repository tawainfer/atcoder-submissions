// https://atcoder.jp/contests/arc117/submissions/38905958

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;

  deque<int> a(n);
  for(auto &z : a) cin >> z;
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());

  ll ans = 1;
  ll mod = 1e9 + 7;

  while(!a.empty()) {
    if(a.size() == 1) ans *= (a[0] + 1);
    else ans *= (a[0] - a[1] + 1);
    a.pop_front();
    ans %= mod;
  }

  cout << ans;
  return 0;
}
