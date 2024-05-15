#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  string s;
  cin >> s;

  set<char> se;
  for(auto &z : s) se.insert(z);
  if(se.size() == 1) {
    cout << 0;
    return 0;
  }

  int ans = 1e9;
  for(char c = 'a'; c <= 'z'; c++) {
    int cnt = 0;
    string x = s;

    while(x.size() > 1) {
      cnt++;
      string y = "";

      for(int i = 0; i < x.size() - 1; i++) {
        if(x[i] == c || x[i + 1] == c) y += c;
        else y += x[i];
      }

      set<char> se;
      for(auto &z : y) se.insert(z);
      if(se.size() == 1) break;

      x = y;
    }

    ans = min(ans, cnt);
  }

  cout << ans;
  return 0;
}