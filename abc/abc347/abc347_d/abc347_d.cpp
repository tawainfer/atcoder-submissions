#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main() {
  ll a, b, c;
  cin >> a >> b >> c;

  ull u = c;
  ll pc = popcount(u);
  for(ll i = 0; i <= min(a, b); i++) {
    if((a - i) + (b - i) != pc) continue;
    if(i + pc > 60) continue;
    
    ll x = 0;
    ll y = 0;
    ll cnt = 0;
    ll cnt2 = i;

    for(ll j = 0; j < 60; j++) {
      if(c & (1LL << j)) {
        cnt++;
        if(cnt <= a - i) {
          x += (1LL << j);
        } else {
          y += (1LL << j);
        }
      } else {
        if(cnt2 > 0) {
          cnt2--;
          x += (1LL << j);
          y += (1LL << j);
        }
      }
    }

    cout << x << " " << y << endl;
    return 0;
  }

  cout << -1;
}