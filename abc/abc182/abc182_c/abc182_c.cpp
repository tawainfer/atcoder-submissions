#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  string n; cin >> n;
  long long m = n.size();
  long long cnt = 0, sum = 0, ans = 1e9;
  for(int bit = 0; bit < (1 << n.size()); bit++) {
    for(int i = 0; i < n.size(); i++) {
      if(bit & (1 << i)) {
        sum += (n[i] - '0');
      } else cnt++;
    }
    if(sum % 3 == 0 && m != cnt) ans = min(ans, cnt);
    sum = 0;
    cnt = 0;
  }
  if(ans == 1e9) cout << -1;
  else cout << ans;
}