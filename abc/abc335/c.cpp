// https://atcoder.jp/contests/abc335/submissions/49073777

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  deque<pair<int, int>> pos;
  for(int i = 0; i < n; i++) {
    pos.push_back(make_pair(i + 1, 0));
  }

  for(int i = 0; i < q; i++) {
    int t;
    cin >> t;

    if(t == 1) {
      int cx = pos[0].first;
      int cy = pos[0].second;

      char c;
      cin >> c;

      switch(c) {
        case 'R':
          cx++;
          break;
        case 'L':
          cx--;
          break;
        case 'U':
          cy++;
          break;
        case 'D':
          cy--;
          break;
      }

      pos.push_front(make_pair(cx, cy));
      pos.pop_back();
    } else if(t == 2) {
      int x;
      cin >> x;

      cout << pos[x - 1].first << " " << pos[x - 1].second << endl;
    }
  }


}
