// https://atcoder.jp/contests/abc243/submissions/30034014

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);

  int n, ans1 = 0, ans2 = 0; cin >> n;
  vector<int> a(n), b(n);
  for(auto& z : a) cin >> z;
  for(auto& z : b) cin >> z;
  
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(a[i] == b[j] && i == j) {
        ans1++;
      } else if(a[i] == b[j]) {
        ans2++;
      }
    }
  }
  cout << ans1 << endl << ans2;
}
