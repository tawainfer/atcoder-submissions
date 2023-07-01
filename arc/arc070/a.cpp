// https://atcoder.jp/contests/abc056/submissions/35443251

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  typedef long long ll;

  ll x;
  cin >> x;

  vector<ll> p = {-1};
  ll sum = 0;

  for(ll i = 1; ; i++) {
    sum += i;
    p.push_back(i);
    if(sum >= x) {
      cout << i;
      break;
    }
  }

  // if(lower_bound(p.begin(), b.end(), x)) {

  // }
}
