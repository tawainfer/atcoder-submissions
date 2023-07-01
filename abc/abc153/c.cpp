// https://atcoder.jp/contests/abc153/submissions/30340448

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  long long n, sum = 0, k;
  cin >> n >> k;
  vector<int> h(n);
  for(auto& z : h) cin >> z;
  sort(h.begin(), h.end());

  if(n > k) for(int i = 0; i < n - k; i++) sum += h[i];
  cout << sum;
}
