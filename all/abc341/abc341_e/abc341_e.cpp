#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  string s;
  cin >> s;

  set<int> se;
  for(int i = 0; i < n - 1; i++) {
    if(s[i] == s[i + 1]) {
      se.insert(i);
    }
  }

  for(int _ = 0; _ < q; _++) {
    int t, l, r;
    cin >> t >> l >> r;
    l--;
    r--;

    if(t == 1) {
      if(l > 0) {
        if(se.find(l - 1) != se.end()) {
          se.erase(l - 1);
        } else {
          se.insert(l - 1);
        }
      }

      if(r != n - 1) {
        if(se.find(r) != se.end()) {
          se.erase(r);
        } else {
          se.insert(r);
        }
      }
    } else if(t == 2) {
      auto iter = se.lower_bound(l);
      if(iter == se.end()) {
        cout << "Yes" << endl;
        continue;
      }

      cout << ((*iter) >= r ? "Yes" : "No") << endl;
    }
  }
}