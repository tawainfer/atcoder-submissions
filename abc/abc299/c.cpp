// https://atcoder.jp/contests/abc299/submissions/40848616

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  int start = -1;
  for(int i = 0; i < n; i++) {
    if(s[i] == 'o') {
      start = i;
      break;
    }
  }

  if(start == -1) {
    cout << -1;
    return 0;
  }
  int st = start;

  int cnt = 0;
  int ans = 0;

  for(int i = st; i < n; i++) {
    if(s[i] == 'o') {
      cnt++;
    } else {
      if(i - 1 >= 0 && s[i - 1] == '-') {
        start++;
        continue;
      }
      int end = i;
      if((start - 1 >= 0 && s[start - 1] == '-') || (s[end] == '-')) {
        ans = max(ans, cnt);
      }
      cnt = 0;
      start = end + 1;
    }
  }

  if(cnt > 0) {
    if(start - 1 >= 0 && s[start - 1] == '-') ans = max(ans, cnt);
  }

  if(ans > 0) cout << ans;
  else cout << -1;
}
