// https://atcoder.jp/contests/abc229/submissions/27538654

#include <bits/stdc++.h>
using namespace std; 
int main() {
  unsigned long long n, w, a, b, ans = 0, count = 0; cin >> n >> w;
  vector<pair<unsigned long long, unsigned long long>> pairs(n);
  for(unsigned long long i = 0; i < n; i++) {
    cin >> a >> b;
    pairs[i] = make_pair(a, b);
  }
  sort(pairs.begin(), pairs.end());
  reverse(pairs.begin(), pairs.end());
  for(unsigned long long i = 0; count <= w && i < n; i++) {
    count += pairs[i].second;
    if(count > w) ans += pairs[i].first * (pairs[i].second - (count - w));
    else ans += pairs[i].first * pairs[i].second;
  }
  cout << ans;
}
