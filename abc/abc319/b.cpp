// https://atcoder.jp/contests/abc319/submissions/45363785

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  cout << "1";
  for(int i = 1; i <= n; i++) {
    bool check = false;
    for(int j = 1; j <= 9; j++) {
      if(n % j != 0) continue;
      if(i % (n / j) == 0) {
        cout << j;
        check = true;
        break;
      }
    }

    if(!check) {
      cout << "-";
    }
  }
}
