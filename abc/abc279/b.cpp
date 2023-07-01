// https://atcoder.jp/contests/abc279/submissions/36799730

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  string s, t;
  cin >> s >> t;

  if(t.size() > s.size()) {
    cout << "No";
    return 0;
  }

  for(int i = 0; i < (s.size() - t.size() + 1); i++) {
    for(int j = 0; j < t.size(); j++) {
      if(s[i + j] != t[j]) break;

      if(j == t.size() - 1) {
        cout << "Yes";
        return 0;
      }
    }
  }

  cout << "No";
}
