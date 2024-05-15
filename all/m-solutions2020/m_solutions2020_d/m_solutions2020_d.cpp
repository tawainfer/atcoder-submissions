#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  ll n;
  cin >> n;

  vector<ll> a;
  ll x;
  while(cin >> x) {
    if(!(!a.empty() && a.back() == x)) { a.push_back(x); }
  }

  while(a.size() >= 2 && a[a.size() - 2] > a.back()) { a.pop_back(); }

  ll ans = 1000;
  ll cnt = 0;
  if(a.size() < 2) {
    cout << ans;
    return 0;
  } else {
    for(ll i = 0; i < a.size(); i++) {
      if(i == 0) {
        if(a[i] < a[i + 1]) {
          cnt += ans / a[i];
          ans %= a[i];
          // cout << "c";
        }
      } else if(i == a.size() - 1) {
        ans += cnt * a[i];
        cnt = 0;
      } else {
        if(a[i - 1] > a[i] && a[i] < a[i + 1]) {
          cnt += ans / a[i];
          ans %= a[i];
          // cout << "b";
        } else if(a[i - 1] < a[i] && a[i] > a[i + 1]) {
          ans += cnt * a[i];
          cnt = 0;
          // cout << "c";
        }
      }

      // cout << i << " " << ans << " " << cnt << endl;
      // cout << a[i - 1] << " " << a[i] << " " << a[i + 1] << endl;
    }
  }

  // for(auto &z : a) cout << z << " ";
  // cout << endl;
  cout << ans;
  return 0;
}