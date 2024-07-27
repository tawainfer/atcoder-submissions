#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, x, y;
  cin >> n >> x >> y;

  vector<ll> a(n), b(n);
  for(auto &z : a) cin >> z;
  for(auto &z : b) cin >> z;
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  ll ca = 0;
  ll sa = 0;
  while(!a.empty()) {
    sa += a.back();
    a.pop_back();
    ca++;
    if(sa > x) break;
  }

  ll cb = 0;
  ll sb = 0;
  while(!b.empty()) {
    sb += b.back();
    b.pop_back();
    cb++;
    if(sb > y) break;
  }

  cout << min(ca, cb);
}