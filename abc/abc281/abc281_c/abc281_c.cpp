#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  typedef long long ll;

  ll n, t;
  cin >> n >> t;

  deque<ll> a(n), b(n);
  for(auto &z : a) cin >> z;
  partial_sum(a.begin(), a.end(), b.begin());
  b.push_front(0);
  t %= b[b.size() - 1];

  ll ok = -1, ng = n;
  while(abs(ng - ok) > 1) {
    ll mid = (ok + ng) / 2;
    if(b[mid] <= t) ok = mid;
    else ng = mid;
  }

  cout << ng << " " << t - b[ok];
  return 0;
}