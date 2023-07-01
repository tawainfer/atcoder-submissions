// https://atcoder.jp/contests/abc285/submissions/38054526

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s;
  cin >> s;

  ll ans = 0;
  ll n = 1;
  for(int i = 0; i < s.size(); i++) {
    ll x = int(s[s.size() - i - 1]) - 64;
    ans += n * x;
    n *= 26;
    // cout << n << " " << x << endl;
  }

  cout << ans;
}
