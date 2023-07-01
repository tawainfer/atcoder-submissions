// https://atcoder.jp/contests/abc154/submissions/30339693

#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, n; cin >> n;
  set<int> s;
  while(cin >> a) s.insert(a);
  cout << ((s.size() == n) ? "YES" : "NO");
}
