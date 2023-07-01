// https://atcoder.jp/contests/abc105/submissions/29002089

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n; cin >> n;
  for(int d4 = 0; d4 <= 25; d4++) {
    for(int d7 = 0; d7 <= 12; d7++) {
      if(d4 * 4 + d7 * 7 == n) {
        cout << "Yes";
        return 0;
      }
    }
  }
  cout << "No";
}
