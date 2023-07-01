// https://atcoder.jp/contests/abc036/submissions/29565931

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  int n; cin >> n;
  char c;
  string s, t;
  vector<string> v(n, "");
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> c;
      s = v[j];
      t = c;
      t += s;
      v[j] = t;
    }
  }
  for(auto x : v) {
    cout << x << "\n";
  }
}
