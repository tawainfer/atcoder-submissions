// https://atcoder.jp/contests/abc241/submissions/29672371

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  vector<int> a(10);
  for(int i = 0; i < 10; i++) cin >> a[i];
  
  cout << a[a[a[0]]];
}
