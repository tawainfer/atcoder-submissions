#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);

  int v, a, b, c; cin >> v >> a >> b >> c;
  for(int i = 0; ; i++) {
    if(i % 3 == 0) {
      if(v - a >= 0) v -= a;
      else {
        cout << "F";
        return 0;
      }
    } else if(i % 3 == 1) {
      if(v - b >= 0) v -= b;
      else {
        cout << "M";
        return 0;
      }
    } else {
      if(v - c >= 0) v -= c;
      else {
        cout << "T";
        return 0;
      }
    }
  }
}