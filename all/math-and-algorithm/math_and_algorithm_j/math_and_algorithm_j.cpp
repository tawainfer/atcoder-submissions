#include <bits/stdc++.h>
using namespace std;
int main() {
  unsigned long long n, ans = 0; cin >> n;
  for(int i = n; i >= 1; i--) {
    if(ans == 0) ans += i;
    else ans *= i;
  }
  cout << ans;
}