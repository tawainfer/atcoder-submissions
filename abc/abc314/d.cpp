// https://atcoder.jp/contests/abc314/submissions/44517515

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  string s;
  cin >> s;

  ll q;
  cin >> q;

  vector<int> t(q), x(q);
  vector<char> c(q);
  for(int i = 0; i < q; i++) {
    cin >> t[i] >> x[i] >> c[i];
  }

  vector<int> ptn(q, 1);
  bool init = true;
  for(int i = 0; i < q; i++) {
    if(init) {
      if(t[i] != 1) {
        init = false;
        if(t[i] == 2) {
          ptn[i] = 2;
        } else if(t[i] == 3) {
          ptn[i] = 3;
        }
      }
    } else {
      if(t[i] == 1) {
        ptn[i] = ptn[i - 1];
      } else if(t[i] == 2) {
        ptn[i] = 2;
      } else if(t[i] == 3) {
        ptn[i] = 3;
      }
    }
  }

  int last = -1;
  int pos = -1;
  for(int i = 0; i < q; i++) {
    if(t[i] != 1) {
      last = t[i];
      pos = i;
    }
  }

  vector<char> ans(n, '?');
  for(int i = q - 1; i >= 0; i--) {
    if(t[i] == 1 && ans[x[i] - 1] == '?') {
      if(pos < i) {
        ans[x[i] - 1] = c[i];
      } else {
        if(last == 2) {
          if('a' <= c[i] && c[i] <= 'z') {
            ans[x[i] - 1] = c[i];
          } else {
            ans[x[i] - 1] = (char)(c[i] + 32);
          }
        } else if(last == 3) {
          if('A' <= c[i] && c[i] <= 'Z') {
            ans[x[i] - 1] = c[i];
          } else {
            ans[x[i] - 1] = (char)(c[i] - 32);
          }
        } else {
          ans[x[i] - 1] = c[i];
        }
      }
    }
  }

  for(int i = 0; i < n; i++) {
    if(ans[i] != '?') {
      cout << ans[i];
    } else {
      if(last == 2) {
        if('a' <= s[i] && s[i] <= 'z') {
          ans[i] = s[i];
        } else {
          ans[i] = (char)(s[i] + 32);
        }
      } else if(last == 3) {
        if('A' <= s[i] && s[i] <= 'Z') {
          ans[i] = s[i];
        } else {
          ans[i] = (char)(s[i] - 32);
        }
      } else {
        ans[i] = s[i];
      }

      cout << ans[i];
    }
  }
}
