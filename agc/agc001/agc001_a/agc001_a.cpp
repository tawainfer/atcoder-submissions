#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, ans = 0; cin >> n;
  int l[2 * n];
  for(int i = 0; i < 2 * n; i++) cin >> l[i];
  sort(l, l + 2 * n);
  for(int i = 0; i < 2 * n; i+=2) {
    ans += l[i];
  }
  cout << ans;
}