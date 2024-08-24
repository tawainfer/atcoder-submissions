#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  vector<ll> h(n);
  for(auto &z : h) cin >> z;

  ll t = 0;
  for(auto x : h) {
    while((t + 1) % 3 != 0) {
      if(x <= 0) break;
      t++;
      x--;
    }

    ll u = x / 5;
    x -= u * 5;
    t += u * 3;

    while(x >= 1) {
      t++;
      if(t % 3 == 0) x -= 3;
      else x--;
    }
  }

  cout << t;
}