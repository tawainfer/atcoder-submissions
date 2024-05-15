#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n;
  cin >> n;

  int ma = 0;
  int ans = 0;
  int x;
  for(int i = 0; i < n; i++) {
    cin >> x;
    if(ma < x) {
      ans = i + 1;
      ma = x;
    }
  }

  cout << ans;
  return 0;
}