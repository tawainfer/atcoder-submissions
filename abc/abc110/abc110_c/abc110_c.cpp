#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  set<char> ss[123], st[123];
  for(int i = 0; i < s.size(); i++) {
    ss[s[i]].insert(t[i]);
    st[t[i]].insert(s[i]);
  }

  for(int i = 97; i < 123; i++) {
    if(ss[i].size() > 1 || st[i].size() > 1) {
      cout << "No";
      return 0;
    }
  }

  cout << "Yes";
  return 0;
}