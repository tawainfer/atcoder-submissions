// https://atcoder.jp/contests/abc143/submissions/30341319

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n; cin >> n;
  char c, d; cin >> d;
  int cnt = 1;
  while(cin >> c) {
    if(d != c) cnt++;
    d = c;
  }
  cout << cnt;
}
