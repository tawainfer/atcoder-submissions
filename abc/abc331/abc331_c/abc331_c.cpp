#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  vector<ll> a(n + 1, 0), b(n + 1, 0);
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
    b[i] = a[i];
  }
  sort(b.begin(), b.end());

  vector<ll> c(n + 1, 0);
  for(int i = 1; i <= n; i++) {
    c[i] = c[i - 1] + b[i];
  }

  for(int i = 1; i <= n; i++) {
    auto iter = upper_bound(b.begin(), b.end(), a[i]);
    if(iter == b.end()) {
      cout << "0 ";
      continue;
    }

    ll idx = distance(b.begin(), iter);
    cout << c.back() - c[idx - 1] << " ";
  }
}