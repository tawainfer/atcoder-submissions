// https://atcoder.jp/contests/abc162/submissions/27200547

#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n, ans = 0; cin >> n;
  for(long long i = 1; i <= n; i++) if(i % 3 != 0 && i % 5 != 0) ans += i;
  cout << ans;
}
