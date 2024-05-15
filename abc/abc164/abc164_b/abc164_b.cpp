#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c, d; cin >> a >> b >> c >> d;
  for(int i = 0; a > 0 && c > 0; i++) {
    if(i % 2 == 0) c -= b;
    else a -= d;
  }
  if(a > 0) cout << "Yes";
  else cout << "No";
}