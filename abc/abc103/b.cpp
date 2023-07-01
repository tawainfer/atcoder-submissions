// https://atcoder.jp/contests/abc103/submissions/29146694

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s, t; cin >> s >> t;
  for(int i = 0; i < s.size(); i++) {
    s = s[s.size()-1] + s;
    s.erase(s.size()-1);
    if(s == t) {
      cout << "Yes";
      return 0;
    }
  }
  cout << "No";
}
