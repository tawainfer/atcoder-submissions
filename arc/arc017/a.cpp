// https://atcoder.jp/contests/arc017/submissions/30606285

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  for(int i = 2; i * i <= n; i++) {
    if(n % i == 0) {
      cout << "NO\n";
      return 0;
    }
  }
  cout << "YES\n";
}
