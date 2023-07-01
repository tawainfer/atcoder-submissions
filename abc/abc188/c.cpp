// https://atcoder.jp/contests/abc188/submissions/29424529

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  
  int n, z; cin >> n;
    n = pow(2, n);
  vector<pair<int, int>> a(n/2);
  vector<pair<int, int>> b(n/2);
  for(int i = 0; i < n / 2; i++) {cin >> z; a[i].first = z; a[i].second = i + 1;}
  for(int i = 0; i < n / 2; i++) {cin >> z; b[i].first = z; b[i].second = i + (n / 2) + 1;}
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  if(a[a.size()-1].first < b[b.size()-1].first) cout << a[a.size()-1].second;
  else cout << b[b.size()-1].second;
}
