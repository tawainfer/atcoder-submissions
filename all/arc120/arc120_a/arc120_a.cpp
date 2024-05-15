#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll n;
  cin >> n;
  vector<ll> a(n + 1), ps(n + 1), pm(n + 1);
  for(ll i = 1; i <= n; i++) {
    cin >> a[i];
    ps[i] = ps[i - 1] + a[i];
    pm[i] = max(pm[i - 1], a[i]);
  }
  for(ll i = 1; i <= n; i++) ps[i] += ps[i - 1];
  for(ll i = 1; i <= n; i++) cout << ps[i] + i * pm[i] << endl;
}