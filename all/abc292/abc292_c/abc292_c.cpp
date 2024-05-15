#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

vector<ll> prime_fac(ll x) {
  vector<ll> res;
  for(int i = 1; i * i <= x; i++) {
    if(x % i == 0) {
      res.push_back(i);
      if(i * i != x) res.push_back(x / i);
    }
  }

  return res;
}

int main() {
  ll n;
  cin >> n;

  vector<int> ptn(200009, 0);
  for(int i = 1; i < 200005; i++) {
    ptn[i] = prime_fac(i).size();
  }

  ll ans = 0;
  for(ll a = 1; a <= n - 1; a++) {
    ll b = n - a;
    ans += ptn[a] * ptn[b];
  }

  cout << ans;
  return 0;
}