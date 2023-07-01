// https://atcoder.jp/contests/abc042/submissions/26606240

#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<char> c(3);
  for(int i = 0; i < 3; i++) cin >> c[i];
  sort(c.begin(), c.end());
  if(c[0] == '5' && c[1] == '5' && c[2] == '7') cout << "YES";
  else cout << "NO";
}
