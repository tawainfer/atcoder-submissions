#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  int ans = 0;
  for(int a = 1; a <= n; a++) {
    for(int b = 1; b <= n; b++) {
      int c = k - a - b;
      if(1 <= c && c <= n) ans++;
    }
  }

  cout << ans;
}