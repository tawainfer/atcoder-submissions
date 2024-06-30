#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  bool ans = false;

  for(int i = 1; i < s.size(); i++) {
    vector<vector<char>> buf(i);

    for(int j = 0; j < s.size(); j++) {
      buf[j % buf.size()].push_back(s[j]);
    }

    for(int j = 0; j < buf.size(); j++) {
      string u = "";
      for(char c : buf[j]) {
        u += c;
      }
      if(u == t) {
        ans = true;
      }
    }
  }

  cout << (ans ? "Yes" : "No");
}