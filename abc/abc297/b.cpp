// https://atcoder.jp/contests/abc297/submissions/40457790

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size();
  bool ans = true;

  vector<int> t;
  for(int i = 0; i < n; i++) {
    if(s[i] == 'B') t.push_back(i);
  }

  if(t[0] % 2 == t[1] % 2) {
    cout << "No";
    return 0;
  }

  vector<int> t2;
  int t3;
  for(int i = 0; i < n; i++) {
    if(s[i] == 'R') t2.push_back(i);
    if(s[i] == 'K') t3 = i;
  }

  if(t2[0] < t3 && t3 < t2[1]) {
    cout << "Yes";
  } else {
    cout << "No";
  }
}
