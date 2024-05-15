#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

double distance(double x1, double y1, double x2, double y2) {
  return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main() {
  int n;
  cin >> n;

  int x, y;
  set<pair<pair<int, int>, int>> se;
  pair<int, int> last;
  
  for(int i = 1; i <= n; i++) {
    cin >> x >> y;
    if(i == 1) {
      last = make_pair(x, y);
    } else se.insert(make_pair(make_pair(x, y), i));
  }

  cout << 1 << endl;

  pair<pair<int, int>, int> cur;
  double d;

  while(!se.empty()) {
    d = INF;

    for(auto z : se) {
      double x = z.first.first;
      double y = z.first.second;
      int idx = z.second;
      if(distance(last.first, last.second, x, y) < d) {
        cur = z;
        d = distance(last.first, last.second, x, y);
      }
    }

    cout << cur.second << endl;
    se.erase(cur);
    last = make_pair(cur.first.first, cur.first.second);
  }

  cout << 1 << endl;
}