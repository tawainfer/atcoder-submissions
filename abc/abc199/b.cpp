// https://atcoder.jp/contests/abc199/submissions/27054975

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n; cin >> n;
  vector<int> a(n); for(int i = 0; i < n; i++) cin >> a[i];
  vector<int> b(n); for(int i = 0; i < n; i++) cin >> b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  if(a[n-1] > b[0]) cout << 0;
  else cout << b[0] - a[n-1] + 1;
}
