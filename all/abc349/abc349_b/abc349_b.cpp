#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  vector<int> cnt(26, 0);
  for(char c : s) {
    cnt[c - 'a']++;
  }

  for(int i = 1; i <= 100; i++) {
    int c = 0;
    for(int j = 0; j < 26; j++) {
      if(cnt[j] == i) {
        c++;
      }
    }

    if(!(c == 0 || c == 2)) {
      cout << "No";
      return 0;
    }
  }

  cout << "Yes";
}