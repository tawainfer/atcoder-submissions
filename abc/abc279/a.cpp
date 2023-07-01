// https://atcoder.jp/contests/abc279/submissions/36792933

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int cnt = 0;
  char c;
  while(cin >> c) {
    if(c == 'v') cnt++;
    else cnt += 2;
  }

  cout << cnt;
  return 0;
}
