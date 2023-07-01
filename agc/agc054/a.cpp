// https://atcoder.jp/contests/agc054/submissions/30343970

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string a;
  int n; cin >> n >> a;

  if(a[0] != a[n-1]) cout << 1;
  else {
    int cnt = 0;
    for(int i = 1; i < n - 2; i++) if(a[i] != a[0] && a[i+1] != a[0]) {
      cout << 2;
      return 0;
    }
    cout << -1;
  }
}
