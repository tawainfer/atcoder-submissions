// https://atcoder.jp/contests/abc209/submissions/26985363

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, x, s = 0, count = 1;  cin >> n >> x;
  while(cin >> n) {if(count % 2 == 0) s += (n - 1); else s += n; count++;}
  if(s > x) cout << "No";
  else cout << "Yes";
}
