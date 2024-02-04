// https://atcoder.jp/contests/abc339/submissions/49982683

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  vector<char> ans;
  for(int i = s.size() - 1; i >= 0; i--) {
    if(s[i] == '.') break;
    ans.push_back(s[i]);
  }

  while(!ans.empty()) {
    cout << ans.back();
    ans.pop_back();
  }
}
