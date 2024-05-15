#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  double n, ans = 0, b = 0, r = 0, a; cin >> n;
  for(int i = 0; i < n; i++) {cin >> a; b += a;}
  for(int i = 0; i < n; i++) {cin >> a; r += a;}
  
  cout << fixed << setprecision(7) << b / n + r / n;
}