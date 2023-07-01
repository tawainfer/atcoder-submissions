// https://atcoder.jp/contests/abc283/submissions/37485703

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n;
  cin >> n;

  vector<int> a(n);
  for(auto &z : a) cin >> z;

  int q;
  cin >> q;
  while(cin >> q) {
    if(q == 1) {
      int k, x;
      cin >> k >> x;
      k--;
      a[k] = x;
    } else {
      int k;
      cin >> k;
      k--;
      cout << a[k] << endl;
    }
  }
}
