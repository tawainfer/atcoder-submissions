#include <bits/stdc++.h>
using namespace std;
const int INF = 2e9;

int main() {
  int n;
  cin >> n;
  
  vector<int> k(n);
  for(auto &z : k) cin >> z;
  
  int ans = INF;
  for(int bit = 0; bit < (1 << n); bit++) {
    vector<int> s(2, 0);

    for(int i = 0; i < n; i++) {
      if(bit & (1 << i)) {
        s[0] += k[i];
      } else {
        s[1] += k[i];
      }
    }

    ans = min(ans, max(s[0], s[1]));
  }
  
  cout << ans;
}