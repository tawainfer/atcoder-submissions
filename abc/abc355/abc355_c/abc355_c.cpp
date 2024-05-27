#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, t;
  cin >> n >> t;

  vector<ll> a(t);
  for(auto &z : a) {
    cin >> z;
    z--;
  }

  vector<int> cy(n, 0), cx(n, 0);
  int lr = 0, rl = 0;
  int ans = 0;
  for(auto x : a) {
    ans++;
    cy[x / n]++;
    cx[x % n]++;
    if(x / n == x % n) lr++;
    if(x / n + x % n == n - 1) rl++;
    
    if(cy[x / n] == n || cx[x % n] == n || lr == n || rl == n) {
      cout << ans;
      return 0;
    }
  }

  cout << -1;
}