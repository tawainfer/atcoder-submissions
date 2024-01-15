// https://atcoder.jp/contests/abc336/submissions/49283381

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int ans = 0;
  for(int i = 0; i < 32; i++) {
    if(n & (1 << i)) break;
    ans++;
  }

  cout << ans;
}
