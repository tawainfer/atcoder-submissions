// https://atcoder.jp/contests/abc314/submissions/44550917

#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int main() {
  int n, m;
  cin >> n >> m;

  vector<double> c(n);
  vector<int> p(n);
  vector<deque<int>> s(n);
  for(int i = 0; i < n; i++) {
    cin >> c[i] >> p[i];
    for(int j = 0; j < p[i]; j++) {
      int x;
      cin >> x;
      s[i].push_back(x);
    }
  }

  for(int i = 0; i < n; i++) {
    c[i] *= s[i].size();
    sort(s[i].begin(), s[i].end());
    while(s[i].front() == 0) s[i].pop_front();
    c[i] /= s[i].size();
  }

  vector<double> ans(m, INF);
  for(int i = m - 1; i >= 0; i--) {
    for(int j = 0; j < n; j++) {
      double sum = 0;
      for(auto x : s[j]) {
        sum += ((i + x < m) ? ans[i + x] : 0.0);
      }

      double avg = sum / (double)s[j].size();
      double cost = avg + c[j];
      ans[i] = min(ans[i], cost);
    }
  }

  cout << fixed << setprecision(5) << ans[0] << endl;
}
