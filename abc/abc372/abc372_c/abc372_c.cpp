#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  string s;
  cin >> s;

  vector<char> v(n);
  for(int i = 0; i < n; i++) v[i] = s[i];

  vector<bool> check(n - 2, false);
  for(int r = 2; r < n; r++) {
    int l = r - 2;
    if(v[l] == 'A' && v[l + 1] == 'B' && v[l + 2] == 'C') {
      check[l] = true;
    }
  }

  int ans = 0;
  for(auto b : check) if(b) ans++;

  for(int _ = 0; _ < q; _++) {
    int x;
    cin >> x;
    x--;

    char c;
    cin >> c;
    v[x] = c;

    vector<int> idx = {x - 2, x - 1, x, x + 1, x + 2};
    for(auto i : idx) {
      if(i >= check.size() || i < 0) continue;
      if(check[i]) {
        ans--;
        check[i] = false;
      }
      if(v[i] == 'A' && v[i + 1] == 'B' && v[i + 2] == 'C') check[i] = true;
      if(check[i]) ans++;
    }

    cout << ans << endl;
    // for(auto c : v) cout << c;
    // cout << endl;
  }
}