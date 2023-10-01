// https://atcoder.jp/contests/abc322/submissions/46066283

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  string s, t;
  cin >> s >> t;

  bool f = false;
  bool e = false;

  if(s.size() <= t.size()) {
    bool check = true;
    for(int i = 0; i < s.size(); i++) {
      if(s[i] != t[i]) {
        check = false;
        break;
      }
    }

    if(check) {
      f = true;
    }

    check = true;
    for(int i = 0; i < s.size(); i++) {
      if(s[s.size() - 1 - i] != t[t.size() - 1 - i]) {
        check = false;
        break;
      }
    }

    if(check) {
      e = true;
    }
  }

  if(f && e) {
    cout << 0;
  } else if(f) {
    cout << 1;
  } else if(e) {
    cout << 2;
  } else {
    cout << 3;
  }
}
