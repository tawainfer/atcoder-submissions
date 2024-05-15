#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for(auto &z : a) cin >> z;

  int ans = 2e9;
  for(int i = -200; i <= 200; i++) {
    int s = 0;
    for(auto &z : a) s += (i - z) * (i - z);
    ans = min(ans, s);
  }

  cout << ans;
  return 0;
}