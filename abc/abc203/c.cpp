// https://atcoder.jp/contests/abc203/submissions/30343747

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  long long n, k;
  cin >> n >> k;
  vector<pair<long long, long long>> p(n);
  for(int i = 0; i < n; i++) cin >> p[i].first >> p[i].second;
  sort(p.begin(), p.end());

  for(int i = 0; i < n; i++) {
    if(i == 0 && k >= p[i].first) {
      k -= p[i].first;
      k += p[i].second;
    } else if(i != 0 && k >= p[i].first - p[i - 1].first) {
      k -= p[i].first - p[i - 1].first;
      k += p[i].second;
    } else {
      if(i == 0) cout << k;
      else cout << p[i - 1].first + k;
      return 0;
    }
  }
  cout << p[p.size() - 1].first + k;
}
