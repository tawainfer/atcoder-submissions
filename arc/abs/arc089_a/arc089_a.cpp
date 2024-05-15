#include <bits/stdc++.h>
using namespace std;
int main() {
  int n; cin >> n;
  int t[n], x[n], y[n];
  for(int i = 0; i < n; i++) cin >> t[i] >> x[i] >> y[i];
  for(int i = 0; i < n; i++) {
    if(i > 0) {
      int T = t[i]-t[i-1];
      int D = abs(x[i]-x[i-1]) + abs(y[i]-y[i-1]);
      if(T < D || T % 2 != D % 2) {
        cout << "No";
        return 0;
      }
    } else {
      int T = t[i];
      int D = abs(x[i]) + abs(y[i]);
      if(T < D || T % 2 != D % 2) {
        cout << "No";
        return 0;
      }
    }
  }
  cout << "Yes";
}