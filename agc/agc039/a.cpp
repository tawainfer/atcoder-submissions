// https://atcoder.jp/contests/agc039/submissions/38333498

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s;
  cin >> s;

  int k;
  cin >> k;

  bool b = true;
  for(int i = 1; i < s.size(); i++) {
    if(s[i - 1] != s[i]) b = false;
  }

  if(b or s.size() == 1) {
    cout << s.size() * k / 2;
    return 0;
  }

  ll ans = 0;
  bool last = false;

  for(int i = 1; i < s.size(); i++) {
    if(s[i] == s[i - 1]) {
      if(i == s.size() - 1) last = true;
      ans++;
      i++;
    }
  }

  if(k > 1) {
    ll cnt = 0;
    for(int i = 0; i < s.size(); i++) {
      if(i == 0) {
        if(last) continue;

        if(s[s.size() - 1] == s[i]) {
          cnt++;
          i++;
        }
      } else {
        if(s[i] == s[i - 1]) {
          cnt++;
          i++;
        }
      }
    }

    ans += (k - 1) * cnt;
    // cout << (k - 1) << " " << cnt << endl;
    cout << ans;
    return 0;
  }
}
