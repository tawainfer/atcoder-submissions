#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, m, k;
  cin >> n >> m >> k;

  vector<ll> c(m);
  vector<char> r(m);
  vector<vector<ll>> a(m, vector<ll>());
  for(int i = 0; i < m; i++) {
    cin >> c[i];
    for(int j = 0; j < c[i]; j++) {
      ll tmp;
      cin >> tmp;
      a[i].push_back(tmp - 1);
    }
    cin >> r[i];
  }

  int ans = 0;
  for(int bit = 0; bit < (1 << n); bit++) {
    int ok = 0;
    set<int> se;
    for(int i = 0; i < n; i++) {
      if(bit & (1 << i)) {
        ok++;
        se.insert(i);
      }
    }
    // if(ok < k) continue;

    bool check = true;
    for(int i = 0; i < m; i++) {
      int cnt = 0;
      for(int j = 0; j < a[i].size(); j++) {
        if(se.find(a[i][j]) != se.end()) cnt++;
      }

      char c = (cnt >= k ? 'o' : 'x');
      if(c != r[i]) {
        check = false;
        break;
      }
    }

    if(check) {
      ans++;
    }
  }

  cout << ans;
}