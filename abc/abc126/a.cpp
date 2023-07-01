// https://atcoder.jp/contests/abc126/submissions/26570327

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, k;
  cin >> n >> k;
  vector<char> s(n);
  for(int i = 0; i < n; i++) cin >> s[i];
  s[k-1] += (char)32;
  for(int i = 0; i < n; i++) cout << s[i];
}
