// https://atcoder.jp/contests/abc193/submissions/27054827

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, min = 1000000001; cin >> n;
  vector<int> a(n);
  vector<int> p(n);
  vector<int> x(n);
  for(int i = 0; i < n; i++) cin >> a[i] >> p[i] >> x[i];
  for(int i = 0; i < n; i++) {
    if(x[i] - a[i] > 0) if(min > p[i]) min = p[i]; 
  }
  if(min == 1000000001) cout << -1;
  else cout << min;
}
