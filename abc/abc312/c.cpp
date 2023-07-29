// https://atcoder.jp/contests/abc312/submissions/44091476

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, m;
  cin >> n >> m;

  vector<ll> a(n), b(m);
  set<ll> se;
  se.insert(0);
  for(ll &z : a) {
    cin >> z;
    se.insert(z);
  }
  for(ll &z : b) {
    cin >> z;
    se.insert(z);
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  for(ll x : se) {
    for(int i = -1; i <= 1; i++) {
      ll y = x + i;
      if(y < 0) continue;

      auto iter1 = upper_bound(a.begin(), a.end(), y);
      ll cnt1;
      cnt1 = distance(a.begin(), iter1);

      auto iter2 = lower_bound(b.begin(), b.end(), y);
      ll cnt2;
      cnt2 = m - distance(b.begin(), iter2);

      if(cnt1 >= cnt2) {
        cout << y;
        return 0;
      }
    }
  }
}
