#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD = 998244353;

int main() {
  ll n;
  cin >> n;

  string s;
  cin >> s;

  for(int i = 1; i < n; i++) {
    if(s[i - 1] != '1' && s[i] != '1') {
      cout << "-1";
      return 0;
    }
  }

  ll cnt = 0;
  s += "1";

  for(int i = n - 1; i >= 0; i--) {
    cnt += ((int)s[i + 1] - 49) * cnt + (i > 0 ? 1 : 0);
    cnt %= MOD;
  }

  cout << cnt;
  return 0;
}