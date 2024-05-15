#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll a, b, c; cin >> a >> b >> c;
  ll x = 2 * b - a - c;
  ll k = (x >= 0 ? 0 : (1 - x) / 2);
  cout << x + 3 * k;
}