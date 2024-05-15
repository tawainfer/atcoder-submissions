#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, ans = 0; cin >> n;
  double x[n], y[n];
  for(int i = 0; i < n; i++) cin >> x[i] >> y[i];
  for(int i = 0; i < n; i++) for(int k = i + 1; k < n; k++) {
    if(i != k) if((abs(y[i] - y[k]) <= abs(x[i] - x[k]))) {
      ans++;
    }
  }
  cout << ans;
}