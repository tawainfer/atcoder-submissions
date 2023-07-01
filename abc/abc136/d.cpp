// https://atcoder.jp/contests/abc136/submissions/39167290

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int n = s.size();
  vector<int> l, r;
  vector<int> ans(n, 0);

  for(int i = 0; i < n; i++) {
    (s[i] == 'R' ? r.push_back(-i) : l.push_back(i));
  }
  sort(r.begin(), r.end());

  int pos;
  for(int i = 0; i < n; i++) {
    if(s[i] == 'R') {
      pos = *lower_bound(l.begin(), l.end(), i);
      if((pos - i) % 2) ans[pos - 1]++;
      else ans[pos]++;
    }
  }

  for(int i = n - 1; i >= 0; i--) {
    if(s[i] == 'L') {
      pos = -*lower_bound(r.begin(), r.end(), -i);
      if((i - pos) % 2) ans[pos + 1]++;
      else ans[pos]++;
    }
  }

  for(auto &z : ans) cout << z << ' ';
  return 0;
}
