// https://atcoder.jp/contests/abc352/submissions/53161763

#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> p(n + 1);
  map<int, int> m;
  for(int i = 1; i <= n; i++) {
    cin >> p[i];
    m[p[i]] = i;
  }

  set<int> se;
  int ans = INF;
  for(int i = 1; i <= n; i++) {
    if(se.size() == k) {
      se.erase(m[i - k]);
    }
    se.insert(m[i]);

    if(se.size() == k) {
      ans = min(ans, (*se.rbegin()) - (*se.begin()));
    }
  }

  cout << ans;
}
