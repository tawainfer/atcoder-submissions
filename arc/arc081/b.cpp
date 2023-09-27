// https://atcoder.jp/contests/abc071/submissions/45975357

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;

int main() {
  ll n;
  cin >> n;

  string s, t;
  cin >> s >> t;

  ll ans = 3;
  ll sp = 1;
  ll cnt = 1;
  if(s[0] != t[0]) {
    ans = 6;
    sp = 2;
    cnt = 2;
  }

  for(int i = sp; i < n; i++) {
    if(cnt == 1) {
      if(s[i] == t[i]) {
        ans *= 2;
      } else {
        ans *= 2;
        cnt = 2;
        i++;
      }
    } else {
      if(s[i] == t[i]) {
        cnt = 1;
      } else {
        ans *= 3;
        i++;
      }
    }

    ans %= MOD;
  }

  cout << ans << endl;
}
