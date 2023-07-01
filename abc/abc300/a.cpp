// https://atcoder.jp/contests/abc300/submissions/41343742

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;

  vector<int> c(n);
  for(auto &z : c) cin >> z;

  for(int i = 0; i < n; i++) {
    if(a + b == c[i]) {
      cout << i + 1;
    }
  }
}
