// https://atcoder.jp/contests/abc321/submissions/45819877

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  for(int i = 1; i < s.size(); i++) {
    if(s[i - 1] <= s[i]) {
      cout << "No";
      return 0;
    }
  }

  cout << "Yes";
}
