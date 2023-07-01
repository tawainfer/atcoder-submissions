// https://atcoder.jp/contests/abc301/submissions/41345631

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  int ct = 0, ca = 0;
  for(auto c : s) {
    if(c == 'T') ct++;
    else ca++;
  }

  if(ct > ca) {
    cout << "T";
  } else if(ct < ca) {
    cout << "A";
  } else {
    if(s[s.size() - 1] == 'T') {
      cout << "A";
    } else {
      cout << "T";
    }
  }
}
