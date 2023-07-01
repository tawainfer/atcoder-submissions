// https://atcoder.jp/contests/abc278/submissions/37229588

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  typedef long long ll;

  ll n;
  cin >> n;

  vector<ll> a(n);
  for(auto &z : a) cin >> z;

  ll q;
  cin >> q;

  bool init = true;
  ll p, x, base, d = 0;
  deque<ll> change;

  while(cin >> q) {
    if(q == 1) {
      cin >> x;

      if(init) {
        for(auto &z : a) z = x;
        base = x;
        d = 0;
        init = false;
      } else {
        while(!change.empty()) {
          a[change[0]] = base;
          change.pop_front();
        }
        d = x - base;
      }
    }

    if(q == 2) {
      cin >> p >> x;
      p--;
      a[p] += x;

      if(!init) {
        if(!binary_search(change.begin(), change.end(), p)) {
          change.push_back(p);
        }
      }
    }

    if(q == 3) {
      cin >> p;
      p--;

      if(init) cout << a[p] << "\n";
      else cout << a[p] + d << "\n";
    }

    // for(auto &z : a) cout << z << " ";
    // cout << "base=" << base << " d=" << d << endl;
  }
}
