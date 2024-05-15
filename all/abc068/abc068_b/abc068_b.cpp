#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, ans = 1; cin >> n;
  for(int i = 1; i <= 100; i++) if(pow(2, i) <= n) ans = pow(2, i);
  cout << ans;
}