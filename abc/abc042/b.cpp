// https://atcoder.jp/contests/abc042/submissions/29229953

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, l; cin >> n >> l;
  vector<string> s(n);
  for(auto& x : s) cin >> x;
  sort(s.begin(), s.end());
  for(auto x : s) cout << x;
}
