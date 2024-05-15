#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int f(int x1, int y1, int x2, int y2) {
  return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}

int main() {
  int n;
  cin >> n;

  vector<int> x(n), y(n);
  for(int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }

  for(int i = 0; i < n; i++) {
    int ma = -INF;
    int ans = -1;
    for(int j = 0; j < n; j++) {
      if(i == j) continue;
      if(f(x[i], y[i], x[j], y[j]) > ma) {
        ma = f(x[i], y[i], x[j], y[j]);
        ans = j + 1;
      }
    }

    cout << ans << endl;
  }
}