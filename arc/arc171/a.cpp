// https://atcoder.jp/contests/arc171/submissions/50007958

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  for(int _ = 0; _ < t; _++) {
    int n, a, b;
    cin >> n >> a >> b;

    if(a > n) {
      cout << "No\n";
      continue;
    }

    int ok = (n - n / 2) * (n - n / 2) + (n / 2 - a) * (n - n / 2);
    if(a >= (n / 2)) {
      ok = (n - a) * (n - a);
    }

    cout << (b <= ok ? "Yes\n" : "No\n");
  }
}
