#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, judge = 0; cin >> n;
  int a[n+1], b, sum = 0;
  for(int i = 0; cin >> b; i++) {
    sum += b;
    if(sum >= 360) {
      sum %= 360;
    }
    b = sum;
    a[i] = b;
  }
  a[n] = 0;
  sort(a, a + n + 1);
  for(int i = 0; i <= n; i++) {
    if(i == 0) {
      if(judge < abs((a[i] + 360) - (a[n]))) judge = abs((a[i] + 360) - (a[n]));
    } else {
      if(judge < abs(a[i] - a[i-1])) judge = abs(a[i] - a[i-1]);
    }
  }
      cout << judge;
}