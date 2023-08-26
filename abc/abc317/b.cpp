// https://atcoder.jp/contests/abc317/submissions/44941092

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for(auto &z : a) cin >> z;
  sort(a.begin(), a.end());

  for(int i = 1; i < n; i++) {
    if(a[i - 1] + 1 != a[i]) {
      cout << a[i - 1] + 1;
      return 0;
    }
  }
}
