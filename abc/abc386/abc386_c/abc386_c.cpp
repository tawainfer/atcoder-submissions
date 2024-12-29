#include <bits/stdc++.h>
using namespace std;

int main() {
  int k;
  cin >> k;

  string s, t;
  cin >> s >> t;

  if(s == t) {
    cout << "Yes";
    return 0;
  }

  int diff = 0;
  for(int i = 0; i < min(s.size(), t.size()); i++) {
    if(s[i] != t[i]) {
      diff++;
    }
  }

  if(diff == 1 && s.size() == t.size()) {
    cout << "Yes";
    return 0;
  }

  int l = 0;
  while(l < min(s.size(), t.size())) {
    if(s[l] != t[l]) break;
    l++;
  }

  int r = 0;
  for(int i = 0; i < min(s.size(), t.size()); i++) {
    if(s[s.size() - i - 1] != t[t.size() - i - 1]) break;
    r++;
  }

  // cout << l << " " << r << endl;
  if(abs((int)s.size() - (int)t.size()) == 1 && (l + r >= s.size() || l + r >= t.size())) {
    cout << "Yes";
    return 0;
  }

  cout << "No";
}