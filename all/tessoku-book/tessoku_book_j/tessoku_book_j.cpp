#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  vector<int> cnt[109];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    cnt[a[i]].push_back(i);
  }
  
  int d;
  cin >> d;

  int l, r;
  for(int i = 0; i < d; i++) {
    cin >> l >> r;
    l--;
    r--;
    
    for(int j = 100; j > 0; j--) {
      auto iter_l = lower_bound(cnt[j].begin(), cnt[j].end(), l);
      auto iter_r = upper_bound(cnt[j].begin(), cnt[j].end(), r);
      int d = distance(iter_l, iter_r);

      if(d != cnt[j].size()) {
        cout << j << endl;
        break;
      }
    }
  }
}