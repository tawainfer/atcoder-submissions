#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, k;
  cin >> n >> k;

  vector<ll> a(n);
  for(auto &z : a) cin >> z;

  set<ll> se = {0};
  do {
    ll f = *se.begin();
    se.erase(f);
    
    if(k == 0) {
      cout << f;
      return 0;
    }

    for(auto x : a) se.insert(x + f);
  } while(k--);
}