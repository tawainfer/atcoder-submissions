// https://atcoder.jp/contests/abc216/submissions/26716840

#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n; cin >> n;
  string ans;
  while(n > 0) {
      if(n % 2 == 1) {ans += "A"; n--;}
      else {ans += "B"; n /= 2;}
  }
  reverse(ans.begin(), ans.end());
  cout << ans;
}
