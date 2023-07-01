// https://atcoder.jp/contests/abc077/submissions/26615781

#include <bits/stdc++.h>
using namespace std;
int main() {
  char c;
  string s, t;
  while(cin >> c) {
    s += c;
  }
  t = s;
  reverse(t.begin(), t.end());
  if(s == t) cout << "YES";
  else cout << "NO";
}
