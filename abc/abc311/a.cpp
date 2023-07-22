// https://atcoder.jp/contests/abc311/submissions/43827279

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  set<char> se;
  for(int i = 0; i < s.size(); i++) {
    se.insert(s[i]);
    if(se.find('A') != se.end() && se.find('B') != se.end() && se.find('C') != se.end()) {
      cout << i + 1;
      return 0;
    }
  }
}
