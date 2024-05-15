#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, m;
  cin >> n >> m;

  set<ll> ans;
  for(ll a = 1; a <= ceil(sqrt(m)); a++) {
    if(a > n) break;
    ll b = (m + a - 1) / a;
    if(b > n || b < a) continue;
    ans.insert(a * b);
  }

  if(ans.size() == 0) cout << -1;
  else cout << *ans.begin();
}