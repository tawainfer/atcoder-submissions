// https://atcoder.jp/contests/abc214/submissions/29850437

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  int n; cin >> n;
  vector<int> s(n), t(n);
  for(auto& z : s) cin >> z;
  for(auto& z : t) cin >> z;

  for(int i = 0; i < n * 2; i++) {
    t[(i+1) % n] = min(t[(i + 1) % n], t[i % n] + s[i % n]);
  }

  for(auto z : t) cout << z << "\n";
}
