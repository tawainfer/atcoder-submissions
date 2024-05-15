#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> ok, ng;
  char c;
  for(int i = 0; i < 10; i++) {
    cin >> c;
    if(c == 'o') ok.push_back(i);
    if(c == 'x') ng.push_back(i);
  }

  int ans = 0;
  for(int i = 0; i <= 9999; i++) {
    string s = to_string(i);
    for(int j = 0; j < (4 - s.size()); j++) s = '0' + s;

    set<int> se;
    for(int j = 0; j < 4; j++) {
      int x = (int)s[j] - 48;

      if(binary_search(ng.begin(), ng.end(), x)) break;
      if(binary_search(ok.begin(), ok.end(), x)) se.insert(x);
      if(j == 3 && se.size() == ok.size()) ans++;
    }
  }

  cout << ans;
  return 0;
}