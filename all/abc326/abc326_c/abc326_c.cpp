#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, m;
  cin >> n >> m;

  deque<ll> a(n);
  for(auto &z : a) cin >> z;
  sort(a.begin(), a.end());

  ll ans = 0;
  deque<ll> b;

  while(!a.empty()) {
    b.push_back(a.front());
    a.pop_front();

    if(b.back() - b.front() < m) {
      ans = max(ans, (ll)b.size());
    } else {
      while(!(b.back() - b.front() <= m)) {
        b.pop_front();
      }
    }
  }

  cout << ans;
  return 0;
}