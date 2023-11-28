// https://atcoder.jp/contests/abc330/submissions/48004159

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, l;
  cin >> n >> l;

  vector<int> a(n);
  for(auto &z : a) cin >> z;

  int ans = 0;
  for(auto x : a) {
    if(x >= l) {
      ans++;
    }
  }

  cout << ans;
}
