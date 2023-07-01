// https://atcoder.jp/contests/arc114/submissions/29646912

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  long long n, ans = 1e18; cin >> n;
  vector<long long> x(n);
  for(auto& z : x) cin >> z;
  vector<int> prime = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
  
  for(int bit = 0; bit < (1 << 15); bit++) {
    long long pro = 0;
    bool flag = false;
    for(int i = 0; i < 15; i++) {
      if(bit & (1 << i)) {
        if(pro == 0) pro += prime[i];
        else pro *= prime[i];
      }
    }
    for(auto z : x) if(gcd(z, pro) == 1) flag = true;
    if(flag) continue;
    if(pro != 0) ans = min(ans, pro);
  }
  cout << ans;
}
