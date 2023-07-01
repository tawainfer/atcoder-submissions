// https://atcoder.jp/contests/abc144/submissions/27282878

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n; cin >> n;
  string ans = "No";
  for(int i = 1; i <= 9; i++) for(int k = 1; k <= 9; k++) if(i * k == n) ans = "Yes";
  cout << ans;
}
