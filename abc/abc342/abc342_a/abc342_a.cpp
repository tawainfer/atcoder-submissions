#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  vector<int> cnt(26, 0);
  for(char c : s) {
    cnt[c - 'a']++;
  }

  for(int i = 0; i < s.size(); i++) {
    if(cnt[s[i] - 'a'] == 1) {
      cout << i + 1;
      return 0;
    }
  }
}