#include <bits/stdc++.h>
using namespace std;
const double INF = 2e18;

double distance(double a, double b) {
  return sqrt(a * a + b * b);
}

int main() {
  int n, s, t;
  cin >> n >> s >> t;

  vector<pair<int, int>> start(n), goal(n);
  for(int i = 0; i < n; i++) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    start[i] = make_pair(a, b);
    goal[i] = make_pair(c, d);
  }

  vector<int> idx;
  for(int i = 0; i < n; i++) idx.push_back(i);

  double ans  = INF;
  do {
    for(int bit = 0; bit < (1 << n); bit++) {
      vector<pair<int, int>> cs(n), cg(n);
      for(int i = 0; i < n; i++) {
        cs[i] = start[i];
        cg[i] = goal[i];
        if(bit & (1 << i)) swap(cs[i], cg[i]);
      }

      int cy = 0;
      int cx = 0;
      double time = 0;
      for(int i : idx) {
        time += distance(abs(cy - cs[i].first), abs(cx - cs[i].second)) / s;
        cy = cs[i].first;
        cx = cs[i].second;

        time += distance(abs(cy - cg[i].first), abs(cx - cg[i].second)) / t;
        cy = cg[i].first;
        cx = cg[i].second;
      }

      ans = min(time, ans);
    }
  } while(next_permutation(idx.begin(), idx.end()));

  cout << fixed << setprecision(10) << ans;
}