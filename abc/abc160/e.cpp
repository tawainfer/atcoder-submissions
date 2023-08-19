// https://atcoder.jp/contests/abc160/submissions/44684556

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll x, y, a, b, c;
  cin >> x >> y >> a >> b >> c;

  deque<ll> p(a), q(b), r(c);
  for(ll &z : p) cin >> z;
  for(ll &z : q) cin >> z;
  for(ll &z : r) cin >> z;
  sort(p.begin(), p.end());
  sort(q.begin(), q.end());
  sort(r.begin(), r.end());
  r.push_front(0);

  vector<ll> rp(a + 1, 0), rq(b + 1, 0);
  for(int i = 0; i < a; i++) rp[i + 1] = rp[i] + p[i];
  for(int i = 0; i < b; i++) rq[i + 1] = rq[i] + q[i];

  ll ans = 0;
  while(x > 0 || y > 0) {
    if(x > 0 && p.back() >= r.back()) {
      ans += p.back();
      p.pop_back();
      x--;
      continue;
    }

    if(y > 0 && q.back() >= r.back()) {
      ans += q.back();
      q.pop_back();
      y--;
      continue;
    }

    ans += r.back();
    r.pop_back();
    if(y == 0) {
      x--;
    } else if(x == 0) {
      y--;
    } else {
      ll sp = rp[p.size()] - rp[p.size() - x - 1];
      ll sq = rq[q.size()] - rq[q.size() - y - 1];

      if((sp + r.back() + sq + q[q.size() - y]) >= sp + p[p.size() - x] + sq + r.back()) {
        x--;
      } else {
        y--;
      }
    }
  }

  cout << ans;
  return 0;
}
