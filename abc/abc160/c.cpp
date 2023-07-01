// https://atcoder.jp/contests/abc160/submissions/30348113

#include <bits/stdc++.h>
using namespace std;
template <class T> bool chmin(T& a, const T& b) {if (b < a) {a = b; return 1;} return 0;}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int k, n; cin >> k >> n;
  int a[1000000];
  for(int i = 0; i < n; i++) cin >> a[i];

  int ans = a[n-1] - a[0];
  for(int i = 1; i < n; i++) {
    int its = k - a[i];
    int sti = a[i-1];
    chmin(ans, its + sti);
  }
  cout << ans;
}
