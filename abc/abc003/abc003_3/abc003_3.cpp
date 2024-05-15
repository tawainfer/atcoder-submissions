#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  double ans = 0;
  int n, k; cin >> n >> k;
  vector<int> r(n);
  vector<int> s(k);
  for(auto& z : r) cin >> z;
  
  sort(r.begin(), r.end());
  reverse(r.begin(), r.end());
  
  for(int i = 0; i < k; i++) s[i] = r[i];
  reverse(s.begin(), s.end());
  
  for(int i = 0; i < k; i++) ans = (s[i] + ans) / 2;
  cout << fixed << setprecision(7) << ans << "\n";
}