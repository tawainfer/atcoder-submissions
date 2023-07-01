// https://atcoder.jp/contests/abc280/submissions/37006921

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  string s, t;
  cin >> s >> t;

  for(int i = 0; i < s.size(); i++) {
    if(s[i] != t[i]) {
      cout << i + 1;
      return 0;
    }
  }

  cout << t.size();
  return 0;
}
