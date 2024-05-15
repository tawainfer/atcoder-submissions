#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for(auto &z : a) cin >> z;
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());

  long long ans = a.front();
  for(int i = 0; i < n - 2; i++) ans += a[i / 2 + 1];
  
  cout << ans;
  return 0;
}