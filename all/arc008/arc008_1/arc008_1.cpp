#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  int n; cin >> n;
  int m = n % 10;
  n /= 10;
  if(m > 6) cout << 100 * n + 100;
  else cout << 100 * n + 15 * m;
}