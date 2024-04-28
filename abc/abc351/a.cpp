// https://atcoder.jp/contests/abc351/submissions/52908606

#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(9), b(8);
  for(auto &z : a) cin >> z;
  for(auto &z : b) cin >> z;

  cout << reduce(a.begin(), a.end()) - reduce(b.begin(), b.end()) + 1;
}
