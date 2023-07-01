// https://atcoder.jp/contests/agc031/submissions/38331815

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  ll mod = 1e9 + 7;
  int n;
  cin >> n;

  string s;
  cin >> s;

  vector<int> cnt(26, 0);
  for(auto &z : s) cnt[(int)z - 97]++;

  ll ans = 1;
  for(auto &z : cnt) {
    ans *= z + 1;
    ans %= mod;
  }

  cout << (ans + mod - 1) % mod;
  return 0;
}
