// https://atcoder.jp/contests/abc156/submissions/26224075

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, r;
  cin >> n >> r;
  if(n < 10) cout << r + (100*(10-n));
  else cout << r;
}
