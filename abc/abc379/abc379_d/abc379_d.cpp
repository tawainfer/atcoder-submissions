#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll q;
  cin >> q;

  deque<ll> d;
  ll ct = 0;
  for(int _ = 0; _ < q; _++) {
    int r;
    cin >> r;

    if(r == 1) {
      d.push_back(ct);
    } else if(r == 2) {
      ll t;
      cin >> t;
      ct += t;
    } else if(r == 3) {
      ll h;
      cin >> h;
      
      ll cnt = 0;
      // cout << "ct=" << ct << endl;
      // cout << "h=" << h << endl;
      // for(auto x : d) cout << x << " ";
      // cout << endl;
      while(d.size() >= 1 && ct - d[0] >= h) {
        // cout << "go! " << ct - d[0] << endl;
        cnt++;
        d.pop_front();

      }
      cout << cnt << endl;
      // for(auto x : d) cout << x << " ";
      // cout << endl;
    }
  }
}