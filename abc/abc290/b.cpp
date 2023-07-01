// https://atcoder.jp/contests/abc290/submissions/39013693

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  string s;
  cin >> n >> k >> s;

  for(int i = 0; i < s.size(); i++) {
    if(s[i] == 'o') {
      if(k <= 0) s[i] = 'x';
      k--;
    }

    cout << s[i];
  }
}
