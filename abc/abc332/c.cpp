// https://atcoder.jp/contests/abc332/submissions/48377776

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  string s;
  cin >> s;

  int ok_normal = m;
  int ng_normal = 0;
  int ok_logo = 0;
  int ng_logo = 0;
  int ans = 0;

  for(char c : s) {
    switch(c) {
      case '0':
        ok_normal += ng_normal;
        ng_normal = 0;
        ok_logo += ng_logo;
        ng_logo = 0;
        break;
      case '1':
        if(ok_normal >= 1) {
          ok_normal--;
          ng_normal++;
        } else {
          if(ok_logo == 0) {
            ans++;
            ok_logo++;
          }
          ok_logo--;
          ng_logo++;
        }
        break;
      case '2':
        if(ok_logo == 0) {
          ans++;
          ok_logo++;
        }
        ok_logo--;
        ng_logo++;
        break;
    }
  }

  cout << ans;
}
