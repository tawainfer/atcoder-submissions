#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll f(ll x1, ll x2, ll y1, ll y2) {
  return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}

int main() {
  // ll xa, ya, xb, yb, xc, yc;
  // cin >> xa >> ya >> xb >> yb >> xc >> yc;

  vector<ll> x, y;
  for(ll i = 0; i < 3; i++) {
    ll a, b;
    cin >> a >> b;
    x.push_back(a);
    y.push_back(b);
  }

  for(ll i = 0; i < 3; i++) {
    ll d1 = f(x[i], x[(i + 1) % 3], y[i], y[(i + 1) % 3]);
    ll d2 = f(x[(i + 1) % 3], x[(i + 2) % 3], y[(i + 1) % 3], y[(i + 2) % 3]);
    ll d3 = f(x[(i + 2) % 3], x[(i + 3) % 3], y[(i + 2) % 3], y[(i + 3) % 3]);
    // cout << d1 << " " << d2 << " " << d3 << endl;
    
    if(d1 + d2 == d3) {
      cout << "Yes";
      return 0;
    }
  }

  cout << "No";
}