// https://atcoder.jp/contests/abc094/submissions/28663390

#include<bits/stdc++.h>
using namespace std;
int main() {
  int n, m, x, before = 0, after = 0; cin >> n >> m >> x;
  while(cin >> m) {
    if(m < x) before++;
    else after++;
  }
  cout << min(before, after);
}
