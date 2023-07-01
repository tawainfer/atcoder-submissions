// https://atcoder.jp/contests/abc192/submissions/28656040

#include <bits/stdc++.h>
using namespace std;
int f(int x) {
  string g = to_string(x), g1, g2;
  sort(g.begin(), g.end());
  g2 = g;
  reverse(g.begin(), g.end());
  g1 = g;
  return stoi(g1) - stoi(g2);
}

int main() {
  int n, k; cin >> n >> k;
  int a = n;
  for(int i = 1; i <= k; i++) a = f(a);
  cout << a;
}
