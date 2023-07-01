// https://atcoder.jp/contests/arc153/submissions/38006733

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;

  vector<ll> ptn;
  set<ll> se;

  for (int i = 1; i <= 9; i++) {
    for (int j = 0; j <= 9; j++) {
      for (int k = 0; k <= 9; k++) {
        for (int l = 0; l <= 9; l++) {
          for (int m = 0; m <= 9; m++) {
            for (int o = 0; o <= 9; o++) {
              string s = "";

              s += to_string(i);
              s += to_string(i);
              s += to_string(j);
              s += to_string(k);
              s += to_string(l);
              s += to_string(l);
              s += to_string(m);
              s += to_string(o);
              s += to_string(m);

              se.insert(stoll(s));
            }
          }
        }
      }
    }
  }

  vector<ll> ans;
  for(auto &z : se) ans.push_back(z);
  cout << ans[n - 1];
}
