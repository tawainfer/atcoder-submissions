#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, h, high = 0, ans = 0; cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> h;
    if(high <= h) {
      ans++;
      high = h;
    }
  }
  cout << ans;
}