// https://atcoder.jp/contests/abc237/submissions/30685321

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string s;
  cin >> s;
  string t = s;
  reverse(all(t));
  int n = s.size(), go = 0, back = 0;
  for(auto z : s) {
    if(z == 'a') go++;
    else break;
  }
  for(auto z : t) {
    if(z == 'a') back++;
    else break;
  }
  if(go > back) {
    cout << "No";
    return 0;
  } else {
    int cnt = 0;
    for(int i = 0; i < n; i++) {
      if(i == 0 && s[i] != 'a') break;
      if(s[i] == 'a') cnt++;
      else {
        s.erase(0, cnt);
        break;
      }
    }
    t = s;
    reverse(all(t));

    int cn = 0;
    for(int i = 0; i < t.size(); i++) {

      if(i == 0 && t[i] != 'a') break;
      if(t[i] == 'a') {
        cn++;
      } else {
        t.erase(0, cn);
        break;
      }
    }

    s = t;
    reverse(all(t));

    if(s == t) cout << "Yes";
    else cout << "No";
  }
}
