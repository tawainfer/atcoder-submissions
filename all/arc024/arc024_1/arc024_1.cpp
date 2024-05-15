#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int L, R, ans = 0; cin >> L >> R;
  vector<int> l(L), r(R);
  
  for(auto& x : l) cin >> x;
  for(auto& x : r) cin >> x;
  sort(l.begin(), l.end());
  sort(r.begin(), r.end());
  
  for(int i = 0; i < l.size(); i++) for(int j = 0; j < r.size(); j++) {
    if(l[i] == r[j]) {
      ans++;
      l[i] = 1;
      r[j] = 2;
      i = 0;
      j = 0;
    }
  }
  cout << ans << "\n";
}