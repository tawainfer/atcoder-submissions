// https://atcoder.jp/contests/agc010/submissions/30341152

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n, odd = 0, even = 0; cin >> n;
  while(cin >> n) n % 2 == 1 ? odd++ : even++;
  even += odd / 2;
  odd %= 2;
  cout << (!odd ? "YES" : "NO");
}
