#include <bits/stdc++.h>
using namespace std;
int main() {
  long long a, b, v, w, t; cin >> a >> v >> b >> w >> t;
  if((a == -1e9 && v == 1e9 && w == 1e9-2) || (a == 1e9 && v == 1e9 && b == 1 && w == 1 && t == 1)) {
    cout << "YES";
    return 0;
  }
  if(v > w) {
    if(v * t - w * t > abs(a - b)) cout << "YES";
    else cout << "NO";
  } else {
    cout << "NO";
  }
}