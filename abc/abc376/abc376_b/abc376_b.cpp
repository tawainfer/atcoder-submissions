#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int main() {
  int n, q;
  cin >> n >> q;

  int ans = 0;
  int cl = 0;
  int cr = 1;

  for(int _ = 0; _ < q; _++) {
    char h;
    int t;
    cin >> h >> t;
    t--;

    if(h == 'L') {
      int s1 = 0;
      int cl1 = cl;
      while(cl1 != t) {
        cl1 = (cl1 + 1) % n;
        s1++;
        if(cl1 == cr) s1 += INF;
      }

      int s2 = 0;
      int cl2 = cl;
      while(cl2 != t) {
        cl2 = (cl2 - 1 + n) % n;
        s2++;
        if(cl2 == cr) s2 += INF;
      }

      ans += min(s1, s2);
      cl = t;
    } else {
      int s1 = 0;
      int cr1 = cr;
      while(cr1 != t) {
        cr1 = (cr1 + 1) % n;
        s1++;
        if(cr1 == cl) s1 += INF;
      }

      int s2 = 0;
      int cr2 = cr;
      while(cr2 != t) {
        cr2 = (cr2 - 1 + n) % n;
        s2++;
        if(cr2 == cl) s2 += INF;
      }

      ans += min(s1, s2);
      cr = t;
    }
  }

  cout << ans;
}