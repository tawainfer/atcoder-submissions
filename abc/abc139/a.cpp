// https://atcoder.jp/contests/abc139/submissions/26361594

#include <bits/stdc++.h>
using namespace std;
int main() {
  int ans = 0;
  vector<char> s(3);
  vector<char> t(3);
  for(int i = 0; i < 3; i++) cin >> s.at(i);
  for(int i = 0; i < 3; i++) cin >> t.at(i);
  for(int i = 0; i < 3; i++) if(s.at(i) == t.at(i)) ans++;
  cout << ans;
}
