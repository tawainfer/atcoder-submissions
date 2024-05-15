#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, s, ans = 0; cin >> n >> s;
  vector<int> a(n), p(n);
  for(auto& x : a) cin >> x;
  for(auto& x : p) cin >> x;
  for(auto x : a) for(auto y : p) if(x + y == s) ans++;
  cout << ans << "\n";
}