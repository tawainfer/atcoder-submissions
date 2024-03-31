// https://atcoder.jp/contests/abc347/submissions/51894852

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size();

  set<string> se;
  for(int i = 0; i < n; i++) {
    int j = 1;
    while(i + j - 1 < n) {
      se.insert(s.substr(i, j));
      j++;
    }
  }

  cout << se.size();
}
