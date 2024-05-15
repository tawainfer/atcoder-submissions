#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 1000009;

void divisor(ll n, set<ll> &ptn) {
  for(ll i = 1; i * i <= n; i++) {
    if(n % i == 0) {
      ptn.insert(i);
      ptn.insert(n / i);
    }
  }
}

int main() {
  ll a, b;
  cin >> a >> b;

  set<ll> ptn;
  divisor(a, ptn);
  divisor(b, ptn);

  vector<ll> ans;
  for(ll x : ptn) {
    if(a % x == 0 && b % x == 0) {
      bool check = true;
      for(ll y : ans) {
        if(gcd(x, y) != 1) {
          check = false;
        }
      }
      
      if(check) ans.push_back(x);
    }
  }

  cout << ans.size();
  return 0;
}
