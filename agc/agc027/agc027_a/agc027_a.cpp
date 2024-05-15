#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll n, x, sum = 0, ans = 0; cin >> n >> x;
  vector<ll> a(n);
  for(auto& z : a) {
    cin >> z;
    sum += z;
  }
  if(x == sum) {
    cout << n;
    return 0;
  }
  if(x > sum) {
    cout << n - 1;
    return 0;
  }
  sort(all(a));
  
  for(auto z : a) {
    if(x >= z) ans++;
    else {
      cout << ans;
      return 0;
    }
    x -= z;
  }
  cout << ans;
}