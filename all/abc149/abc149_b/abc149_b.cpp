#include <bits/stdc++.h>
using namespace std;
int main() {
  long long a, b, k; cin >> a >> b >> k;
  if(a >= k) {
    cout << a - k << " " << b;
  } else if(a + b >= k) {
    cout << 0 << " " << b - k + a;
  } else {
    cout << 0 << " " << 0;
  }
}