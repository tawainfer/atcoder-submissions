#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll n;
  cin >> n;

  vector<ll> a(n), b(n - 1);
  for(auto &z : a) cin >> z;
  for(auto &z : b) cin >> z;
  sort(a.begin(), a.end());

  ll ok = INF;
  ll ng = 0;
  while(ok - ng > 1) {
    ll mid = (ok + ng) / 2;
    vector<ll> c;
    for(auto x : b) c.push_back(x);
    c.push_back(mid);
    sort(c.begin(), c.end());

    bool check = true;
    for(int i = 0; i < n; i++) {
      if(a[i] > c[i]) {
        check = false;
        break;
      }
    }

    if(check) {
      ok = mid;
    } else {
      ng = mid;
    }
  }

  cout << (ok == INF ? -1 : ok);
}