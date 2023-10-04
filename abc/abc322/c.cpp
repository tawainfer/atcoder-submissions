// https://atcoder.jp/contests/abc322/submissions/46198475

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> a(m);
  for(int &z : a) cin >> z;

  int idx = 0;
  for(int i = 1; i < n; i++) {
    cout << a[idx] - i << endl;
    if(a[idx] == i) idx++;
  }
  cout << 0;
}
