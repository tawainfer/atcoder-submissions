#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll n, k;
  cin >> n >> k;

  deque<ll> a(n);
  for(auto &z : a) cin >> z;
  sort(a.begin(), a.end());

  ll ans = INF;
  for(int i = 0; i < n; i++) {
    int j = i + (n - k) - 1;
    if(j >= n) break;
    ans = min(ans, a[j] - a[i]);
  }

  cout << ans;
}