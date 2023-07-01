// https://atcoder.jp/contests/abc304/submissions/41949190

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll calc(ll x1, ll y1, ll x2, ll y2) {
  return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}

int main() {
  ll n, d;
  cin >> n >> d;

  vector<ll> x(n + 1), y(n + 1);
  for(ll i = 0; i < n; i++) {
    cin >> x[i + 1] >> y[i + 1];
  }

  vector<bool> virus(2009, false);
  virus[1] = true;
  vector<ll> st = {1};

  while(!st.empty()) {
    ll f = st.back();
    st.pop_back();

    for(ll i = 1; i <= n; i++) {
      if(f == i) continue;
      if(virus[i]) continue;
      // cout << f << " " << i <<" "<< calc(x[f], y[f], x[i], y[i]) << " " << (d * d) << endl;
      if(calc(x[f], y[f], x[i], y[i]) <= (d * d)) {
        virus[i] = true;
        st.push_back(i);
      }
    }
  }

  for(ll i = 1; i <= n; i++) {
    if(virus[i]) cout << "Yes\n";
    else cout << "No\n";
  }
}
