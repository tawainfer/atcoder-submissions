#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for(auto &z : a) cin >> z;

  vector<int> b = {0};
  for(int i = 2; i < n; i += 2) {
    b.push_back(b.back() + (a[i] - a[i - 1]));
  }

  // debug
  // for(auto x : b) cout << x << " ";
  // cout << endl;

  int q;
  cin >> q;

  while(q--) {
    int l, r;
    cin >> l >> r;

    auto iter_l = lower_bound(a.begin(), a.end(), l);
    auto iter_r = upper_bound(a.begin(), a.end(), r);
    int idx_l = distance(a.begin(), iter_l);
    int idx_r = distance(a.begin(), iter_r);

    if(iter_l == a.end()) {
      cout << 0;
      continue;
    }

    if(iter_r == a.end()) idx_r = n - 1;
    // if(idx_r % 2 == 1) idx_r--;

    
    idx_l = distance(a.begin(), iter_l);
    idx_r = distance(a.begin(), iter_r);
    // if(idx_l % 2 == 0) s -= (*iter_l) - l;
    // if(idx_r % 2 == 0) s -= (*iter_r) - r;

    int ans = b[idx_r / 2] - b[max(idx_l / 2, 0)];
    if(idx_l % 2 == 0) ans += (a[idx_l] - l);
    if(idx_r % 2 == 0) ans -= a[idx_r] - r;

    // cout << "idx_l=" << a[idx_l] << " " << l << endl;
    // cout << idx_r / 2 << " " << max(idx_l / 2, 0) << endl;
    // cout << b[idx_r / 2] - b[max(idx_l / 2, 0)] << endl;
    cout << ans << endl;
  }
}