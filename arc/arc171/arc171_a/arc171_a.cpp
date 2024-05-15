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

    int ok = (n - max(n / 2, a)) * (n - a);
    cout << (b <= ok ? "Yes\n" : "No\n");
  }
}