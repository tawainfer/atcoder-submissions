// https://atcoder.jp/contests/abc328/submissions/47468893

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  deque<char> d;
  for(char c : s) {
    d.push_back(c);
    if(d.size() >= 3 && d[d.size() - 3] == 'A' && d[d.size() - 2] == 'B' && d.back() == 'C') {
      for(int i = 0; i < 3; i++) {
        d.pop_back();
      }
    }
  }

  for(char c : d) cout << c;
}
