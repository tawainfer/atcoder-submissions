#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void div(ll &n, int &ans) {
  for(ll i = 1; i * i <= n; i++) {
    if(n % i == 0) {
      if(i * i == n) ans = min(ans, (int)to_string(i).size());
      else ans = min(ans, max((int)to_string(i).size(), (int)to_string(n / i).size()));
    }
  }
}

int main() {
  ll n;
  cin >> n;

  int ans = 2e9;
  div(n, ans);

  cout << ans;
  return 0;
}