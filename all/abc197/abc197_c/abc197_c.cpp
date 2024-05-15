#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  long long n, ans = 1e18; cin >> n;
  vector<int> a(n);
  for(auto& x : a) cin >> x;
  
  for(int bit = 0; bit < (1 << (n - 1)); bit++) {
    int ored = 0, xored = 0, start = 0, cnt = 0;
    
    for(int j = 0; j < n - 1; j++) {
      if(bit & (1 << j)) {
        for(int k = start; k <= j; k++) {
          ored |= a[k];
        }
        start = j + 1;
        xored ^= ored;
        ored = 0;
      } else cnt++;
    }
    
    for(int k = start; k < n; k++) ored |= a[k];
    xored ^= ored;
    
    if(ans > xored) {
      ans = xored;
    }
  }
  cout << ans;
}