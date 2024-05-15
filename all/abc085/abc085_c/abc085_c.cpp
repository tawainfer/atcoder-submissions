#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n, y;
  cin >> n >> y;
  for(long long a = 0; a <= n; a++) for(long long b = 0; b <= n-a; b++) {
    long long c = n - (a + b);
    if(10000LL * a + 5000LL * b + 1000LL * c == y && a + b + c == n) {
      cout << a << endl << b << endl << c;
      return 0;
    }
  }
  cout << -1 << endl << -1 << endl << -1;
}