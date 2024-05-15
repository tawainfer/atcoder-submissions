#include <bits/stdc++.h>
using namespace std;
int main() {
  int n; cin >> n;
  double r[n], ans = 0.000000000000;
  for(int i = 0; i < n; i++) cin >> r[i];
  sort(r, r + n);
  reverse(r, r + n);
  if(n % 2 == 0) {
    for(int i = 0; i < n; i += 2) {
      ans += pow(r[i], 2);
      ans -= pow(r[i + 1], 2);
    }
  } else {
    ans += pow(r[0], 2);
    for(int i = 1; i < n; i += 2) {
      ans -= pow(r[i], 2);
      ans += pow(r[i + 1], 2);
    }
  }
  printf("%.10f\n", ans * 3.14159265358979);
}