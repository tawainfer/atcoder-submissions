#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll n, k, x, ans = 0; cin >> n >> k >> x;
  vector<ll> a(n);
  for(auto& z : a) {
    cin >> z;
    ans += z;
  }
  sort(all(a));
  reverse(all(a));

  for(int i = 0; i < n; i++) {
      int use = min(a[i] / x, k);
      k -= use;
      a[i] = a[i] - use * x;
      ans -= use * x;
    if(k == 0) {
      cout << ans;
      return 0;
    }
  }
  
  sort(all(a));
  reverse(all(a));

  for(int i = 0; i < n; i++) {
    if(a[i] != 0) {
      k--;
      ans -= a[i];
      a[i] = 0;
    }
    if(ans == 0 || k == 0) {
      cout << ans;
      return 0;
    }
  }
}