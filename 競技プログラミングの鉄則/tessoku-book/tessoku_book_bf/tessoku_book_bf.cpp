#include <bits/stdc++.h>
using namespace std;
const int MIN = -1e9;

int main() {
  int n, q;
  cin >> n >> q;

  int rn = ceil(sqrt(n));
  vector<multiset<int>> ms(rn);
  vector<int> a(n + 1, 0);

  for(int i = 0; i < rn; i++) {
    for(int j = 0; j < rn; j++) {
      ms[i].insert(0);
    }
  }

  for(int _ = 0; _ < q; _++) {
    int t;
    cin >> t;

    if(t == 1) {
      int pos, x;
      cin >> pos >> x;
      pos--;

      ms[pos / rn].erase(ms[pos / rn].find(a[pos]));
      a[pos] = x;
      ms[pos / rn].insert(x);
    } else if(t == 2) {
      int l, r;
      cin >> l >> r;
      l--;
      r -= 2;

      int ans = MIN;
      for(int i = 0; i < rn; i++) {
        int cl = rn * i;
        int cr = rn * (i + 1) - 1;

        if(l <= cl && cr <= r) {
          auto iter = ms[i].end();
          iter--;
          ans = max(ans, (*iter));
        } else if(r < cl || cr < l) {
        } else {
          int cm = MIN;
          for(int j = 0; j < rn; j++) {
            if(l <= rn * i + j && rn * i + j <= r) {
              cm = max(cm, a[rn * i + j]);
            }
          }
          ans = max(ans, cm);
        }
      }

      cout << ans << endl;
    }
  }
}