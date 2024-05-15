#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  vector<set<ll>> pos(n + 1);
  vector<ll> t(n), x(n);
  for(int i = 0; i < n; i++) {
    cin >> t[i] >> x[i];
    if(t[i] == 1) {
      pos[x[i]].insert(i);
    }
  }

  vector<ll> ans(n, 0);
  for(int i = n - 1; i >= 0; i--) {
    if(t[i] == 2) {
      auto iter = pos[x[i]].lower_bound(i);
      if(iter == pos[x[i]].begin()) {
        cout << "-1";
        return 0;
      }

      iter--;
      ans[(*iter)]++;
      pos[x[i]].erase(iter);
    }
  }

  ll cnt = 0;
  multiset<ll> ms;
  for(int i = 0; i < n; i++) {
    if(t[i] == 1 && ans[i] == 1) {
      ms.insert(x[i]);
      // cout << "add " << x[i] << endl;
    } else if(t[i] == 2) {
      ms.erase(ms.find(x[i]));
      // cout << "erase " << x[i] << endl;
    }

    cnt = max(cnt, (ll)ms.size());
  }

  cout << cnt << endl;
  for(int i = 0; i < n; i++) {
    if(t[i] == 1) {
      cout << ans[i] << " ";
    }
  }
}