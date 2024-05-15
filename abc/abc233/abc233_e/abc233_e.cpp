#include <bits/stdc++.h>
using namespace std;

int main() {
  string x;
  cin >> x;

  string y = x;
  reverse(y.begin(), y.end());

  vector<int> a(10000009, 0);
  for (int i = 1; i <= y.size(); i++) {
    a[1] += (int)y[i - 1] - 48;
    a[i + 1] -= (int)y[i - 1] - 48;
  }
  for (int i = 1; i < 500009; i++) a[i] += a[i - 1];

  int up;
  for (int i = 1; i <= 10000009; i++) {
    if (i != 1) a[i] += up;
    up = a[i] / 10;
    a[i] %= 10;
  }

  string ans = "";
  bool start = false;
  for (int i = 10000005; i > 0; i--) {
    if (a[i] != 0) start = true;
    if (start) ans += (char)(a[i] + 48);
  }

  cout << ans;
  return 0;
}