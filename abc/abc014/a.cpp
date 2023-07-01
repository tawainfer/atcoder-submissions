// https://atcoder.jp/contests/abc014/submissions/29998197

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);

  int a, b; cin >> a >> b;
  cout << ((a % b == 0) ? 0 : b - a % b) << endl;
}
