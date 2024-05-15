#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  int ans = 0;
  deque<char> ptn;

  for(char i = '0'; i <= '9'; i++) {
    for(char j = '0'; j <= '9'; j++) {
      for(char k = '0'; k <= '9'; k++) {
        ptn.clear();
        ptn = {i, j, k};

        for(int l = 0; l < n; l++) {
          if(ptn.empty()) break;
          if(ptn.front() == s[l]) {
            ptn.pop_front();
          }
        }

        if(ptn.empty()) {
          ans++;
        }
      }
    }
  }

  cout << ans;
  return 0;
}