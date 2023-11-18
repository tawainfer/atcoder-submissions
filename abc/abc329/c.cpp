// https://atcoder.jp/contests/abc329/submissions/47688899

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  int ans = 0;
  for(char c = 'a'; c <= 'z'; c++) {
    int cnt = 0;
    int cc = 0;
    for(int i = 0; i < n; i++) {
      if(s[i] == c) {
        cc++;
      } else {
        cnt = max(cnt, cc);
        cc = 0;
      }
    }

    cnt = max(cnt, cc);
    ans += cnt;
  }

  cout << ans;
}
