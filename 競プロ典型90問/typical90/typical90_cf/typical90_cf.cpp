#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  string s;
  cin >> n >> s;

  ll ans = 0;
  ll ok = -1;
  ll ng = -1;

  for(ll i = 0; i < n; i++) {
    if(s[i] == 'o') {
      ans += (ng + 1);
    } else {
      ans += (ok + 1);
    }

    if(s[i] == 'o') {
      ok = i;
    } else {
      ng = i;
    }
  }

  cout << ans;
}