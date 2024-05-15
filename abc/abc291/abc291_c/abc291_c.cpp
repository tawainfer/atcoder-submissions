#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;

  int y = 0;
  int x = 0;
  set<pair<int, int>> ptn;
  ptn.insert(make_pair(y, x));

  for(auto &c : s) {
    if(c == 'U') {
      y++;
    }

    if(c == 'D') {
      y--;
    }

    if(c == 'L') {
      x--;
    }

    if(c == 'R') {
      x++;
    }

    if(ptn.find(make_pair(y, x)) != ptn.end()) {
      cout << "Yes";
      return 0;
    }

    ptn.insert(make_pair(y, x));
  }

  cout << "No";
  return 0;
}