// https://atcoder.jp/contests/agc028/submissions/39112046

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, m;
  string s, t;
  cin >> n >> m >> s >> t;

  ll l = lcm(n, m);
  ll g = gcd(n, m);

    ll i = 0;
    ll j = 0;

    while(i < n) {
      if(s[i] != t[j]) {
        cout << -1;
        return 0;
      }

      i += l / m;
      j += l / n;
    }


  cout << l;
  return 0;
}
