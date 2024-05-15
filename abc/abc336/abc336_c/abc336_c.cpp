#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  n--;

  if(n == 0) {
    cout << 0;
    return 0;
  }

  vector<ll> ptn = {0, 2, 4, 6, 8};
  vector<ll> ans;
  while(n > 0) {
    ll x = n % 5;
    n /= 5;
    ans.push_back(x);
  }
  reverse(ans.begin(), ans.end());

  for(auto x : ans) {
    cout << ptn[x];
  }
}