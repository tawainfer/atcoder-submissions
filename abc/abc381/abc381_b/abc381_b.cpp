#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  vector<int> cnt(256, 0);
  for(char c : s) {
    cnt[c]++;
  }

  for(int i = 0; i < cnt.size(); i++) {
    if(cnt[i] != 0 && cnt[i] != 2) {
      cout << "No";
      return 0;
    }
  }

  if(s.size() % 2 != 0) {
    cout << "No";
    return 0;
  }

  for(int i = 0; i < s.size(); i += 2) {
    if(s[i] != s[i + 1]) {
      cout << "No";
      return 0;
    }
  }

  cout << "Yes";
}