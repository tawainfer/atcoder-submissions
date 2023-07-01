// https://atcoder.jp/contests/arc029/submissions/29383341

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n, a = 0, b = 0; cin >> n;
  vector<int> t(n);
  for(auto& x : t) cin >> x;
  sort(t.begin(), t.end());
  reverse(t.begin(), t.end());
  for(auto x : t) {
    if(a > b) b += x;
    else a += x;
  }
  cout << max(a, b) << "\n";
}
