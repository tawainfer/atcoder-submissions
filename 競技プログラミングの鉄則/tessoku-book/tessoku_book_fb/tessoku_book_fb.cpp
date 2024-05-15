#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

deque<ll> divisor(ll n) {
  deque<ll> res;
  ll t = ceil(sqrt(n));
  if(t * t == n) {
    res.push_back((ll)sqrt(n));
  }

  for(ll i = t - 1; i >= 1; i--) {
    if(n % i == 0) {
      res.push_front(i);
      res.push_back(n / i);
    }
  }

  return res;
}

int main() {
  ll n;
  cin >> n;

  for(ll x : divisor(n)) {
    cout << x << endl;
  }
}