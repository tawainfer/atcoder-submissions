#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

double f(ll a, ll b, ll c, ll d) {
  return sqrt((a - c) * (a - c) + (b - d) * (b - d));
}

int main() {
  ll n;
  cin >> n;

  vector<ll> x(n), y(n);
  for(int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }
  x.push_back(0);
  y.push_back(0);

  double ans = 0;
  double cx = 0;
  double cy = 0;
  for(int i = 0; i < x.size(); i++) {
    ans += f(cx, cy, x[i], y[i]);
    cx = x[i];
    cy = y[i];
  }

  cout << fixed << setprecision(10) << ans << endl;
}